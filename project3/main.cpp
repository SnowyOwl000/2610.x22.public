#include <iostream>

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
// void keyGen()
//   Generate public / private key pair
//

void keyGen() {

    cout << "You are in keyGen()" << endl;
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
    } else if (argv[1][1] == 'd') {
        // decrypt a file
    } else {
        // bad option
        usage(argv[0]);
    }

    return 0;
}
