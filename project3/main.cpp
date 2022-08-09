#include <iostream>
#include <random>
#include <sys/stat.h>
#include "codec64.h"

using namespace std;

//-----------------------------------------------------------------------------
// bool isPrime(int64_t n)
//   Determines if n is prime
//
// Parameter
//   n - value to be tested
//
// Returns
//  true if n is prime, false if it is not
//

bool isPrime(int64_t n) {

}



//-----------------------------------------------------------------------------
// int64_t gcd(int64_t a,int64_t b)
//   Find gcd of a and b
//
// Parameters
//   a,b - two integers with some common divisor (maybe 1)
//
// Returns
//   gcd of a and b
//

int64_t gcd(int64_t a,int64_t b) {
    int64_t
        r;

    a = (a < 0) ? -a : a;
    b = (b < 0) ? -b : b;

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}



//-----------------------------------------------------------------------------
// int64_t modInverse(int64_t a,int64_t n)
//   Calculate b such that (a * b) % n == 1
//
// Parameters
//   a - value whose inverse is being calculated
//   n - modulus
//
// Returns
//   b such that (a * b) % n == 1
//
// Note:
// - gcd(a,n) must be 1, or no inverse exists
//

int64_t modInverse(int64_t a,int64_t n) {
    int64_t
        r=n,rNew=a,
        t=0,tNew=1,
        q,
        tmp;

    while (rNew != 0) {
        q = r / rNew;

        tmp = rNew;
        rNew = r - q * rNew;
        r = tmp;

        tmp = tNew;
        tNew = t - q * tNew;
        t = tmp;
    }

    if (r > 1) {
        cout << "Mod inverse fail" << endl;
        exit(1);
    }

    if (t < 0)
        t += n;

    return t;
}



//-----------------------------------------------------------------------------
// uint64_t modExp(uint64_t base,uint64_t exp,uint64_t mod)
//   Calculate (base ** exp) % mod
//
// Parameters
//   base - number to be raised to a power
//   exp  - power to raise base
//   mod  - modulus
//
// Returns
//   (base ** exp) % mod
//
// Note:
// - uses repeated squaring to efficiently raise the number to a power.
//   pow( ) is NOT used!
//

uint64_t modExp(uint64_t base,uint64_t exp,uint64_t mod) {

}



//-----------------------------------------------------------------------------
// int64_t getFileSize(char *fn)
//   Get size of given file
//
// Parameter
//   fn - C-string holding the file name
//
// Returns
//   size of the file, in bytes
//

int64_t getFileSize(char *fn) {
    struct stat
        fs{};

    stat(fn,&fs);   // stat( ) is a "system call," a request made
                            // directly to the operating system

    return fs.st_size;
}

//-----------------------------------------------------------------------------
// void keyGen()
//   Generate public / private key pair
//

void keyGen() {
    // variables
    int64_t
        p,q,
        n,
        f,
        d,e;
    random_device
        rd;
    mt19937
        mt(rd());
    uniform_int_distribution<>
        dis(4096,65535);

    // cout << "You are in keyGen()" << endl;

    // step 1: choose random prime p such that 4096 <= p <= 65535
    // note: this also means 4097 <= p <= 65521
    do {
        p = dis(mt);
    } while (!isPrime(p));

    // step 2: choose random prime q with same bounds

    // step 3: n = p * q and f = (p-1) * (q-1)

    // step 4: choose random e such that gcd(e,f) == 1 and 4096 <= e <= 65535
    do {
        e = dis(mt);
    } while (gcd(e,f) != 1);

    // step 5: calculate d such that (d * e) % f == 1
    d = modInverse(e,f);

    // step 6: output n,e as public key, output n,d as private key
}



//-----------------------------------------------------------------------------
// void encrypt(char *inName,char *outName,int64_t n,int64_e)
//   Encrypt a file
//
// Parameters
//   inName  - name of file to be encrypted
//   outName - name of file to hold encrypted data
//   n,e     - two numbers that make the public key
//

void encrypt(char *inName,char *outName,int64_t n,int64_t e) {
    // variables
    Codec64
        codec;
    ifstream
        inFile;
    uint32_t
        fileSize,
        plain,
        cipher;
    uint8_t
        c1,c2,c3;

//    cout << "In encrypt" << endl;
//    cout << "Input file: [" << inName << ']' << endl;
//    cout << "Output file: [" << outName << ']' << endl;
//    cout << "n = " << n << "   e = " << e << endl;

    // step 1: open input file and make sure that worked

    // step 2: prepare codec for output
    codec.beginEncode(outName);

    // step 3: get size of input file
    fileSize = getFileSize(inName);

    // step 4: send the file size to the codec
    codec.put32(fileSize);

    // step 5: loop over all bytes in the file, 3 at a time
    for (int i=0;i<fileSize;i+=3) {

        // step 5.1: get three bytes from the input file, if they're available
        c1 = inFile.get();

        if (i+1 < fileSize)
            c2 = inFile.get();
        else
            c2 = 0;

        if (i+2 < fileSize)
            c3 = inFile.get();
        else
            c3 = 0;

        // step 5.2: combine c1, c2, c3 into a single number
        //           put result in plain

        // step 5.3: encrypt plain
        cipher = modExp(plain,e,n);

        // step 5.4: send cipher to codec
        codec.put32(cipher);
    }

    // step 6: tell codec we're done
    codec.endEncode();

    // step 7: close the input file
}



//-----------------------------------------------------------------------------
// void decrypt(char *inName,char *outName,int64_t n,int64_d)
//   Decrypt a file
//
// Parameters
//   inName  - name of file to be decrypted
//   outName - name of file to hold decrypted data
//   n,d     - two numbers that make the private key
//

void decrypt(char *inName,char *outName,int64_t n,int64_t d) {
    // variables
    Codec64
            codec;
    ofstream
            outFile;
    uint32_t
            fileSize,
            plain,
            cipher;
    uint8_t
            c1, c2, c3;

//    cout << "In decrypt" << endl;
//    cout << "Input file: [" << inName << ']' << endl;
//    cout << "Output file: [" << outName << ']' << endl;
//    cout << "n = " << n << "   d = " << d << endl;

    // step 1: prepare codec for decoding

    // step 2: open output file, make sure that worked

    // step 3: get file size from codec (really from the input file)
    codec.get32(fileSize);

    // step 4: loop over all bytes in the file, 3 at a time
    for (int i = 0; i < fileSize; i += 3) {

        // step 4.1: get cipher from codec

        // step 4.2: decrypt cipher using modExp()

        // step 4.3: split plain into c1, c2, c3
        c1 = plain % 256;
        plain /= 256;
        c2 = plain % 256;
        plain /= 256;
        c3 = plain % 256;

        // step 4.4: output bytes, if they aren't past end of file
        outFile << c1;

        if (i + 1 < fileSize)
            outFile << c2;

        // same for c3
    }

    // step 5: close output file

    // step 6: tell codec we're done

}


//-----------------------------------------------------------------------------
// void usage(char *progName)
//   Output a program usage message and exit the program
//
// Parameter
//   progName - C string holding the program's name... argv[0] from main( )
//

void usage(char *progName) {

    cout << "Usage: " << progName << " -k\n"
        << "       " << progName << " -e n-value e-value input-filename output-filename\n"
        << "       " << progName << " -d n-value d-value input-filename output-filename\n";

    exit(1);
}



//-----------------------------------------------------------------------------
// int main(int argc,char *argv[])
//   The main program
//
// Parameters
//   argc - number of command-line parameters
//   argv - list of command-line parameters, as C strings
//
// Returns
//   0 if program worked
//
// Note:
// - If the command-line parameters are bad, the usage() function is called,
//   which exits the program with exit code 1
//

int main(int argc,char *argv[]) {

    // if # of command line parameters is less than 2, then fail

    if (argc < 2)
        usage(argv[0]);

    // look at argv[1]... if first char is not '-', fail
    if (argv[1][0] != '-')
        usage(argv[0]);

    // look at second char of argv[1]... should be k, e or d
    if (argv[1][1] == 'k') {
        // generate a key pair

        // make sure only two command-line parameters
        if (argc != 2)
            usage(argv[0]);

        // call key pair generator
        keyGen();
    } else if (argv[1][1] == 'e') {
        // encrypt a file

        // make sure there are six parameters
        if (argc != 6)
            usage(argv[0]);

        int64_t
            n = strtoll(argv[2], nullptr,10),
            e = strtoll(argv[3], nullptr,10);

        encrypt(argv[4],argv[5],n,e);
    } else if (argv[1][1] == 'd') {
        // decrypt a file

        // make sure there are six parameters
        if (argc != 6)
            usage(argv[0]);

        int64_t
            n = strtoll(argv[2], nullptr,10),
            d = strtoll(argv[3], nullptr,10);

        decrypt(argv[4],argv[5],n,d);
    } else {
        // bad option
        usage(argv[0]);
    }

    return 0;
}
