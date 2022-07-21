#include <iostream>

using namespace std;

void showToppings(bool hasPepperoni,bool hasGPeppers,bool hasMushrooms,bool hasSausage,
                  bool hasJPeppers,bool hasOlives) {

    cout << "Current toppings:";
    if (hasPepperoni)
        cout << " pepperoni";
    if (hasGPeppers)
        cout << " green-peppers";
    if (hasMushrooms)
        cout << " mushrooms";
    if (hasSausage)
        cout << " sausage";
    if (hasJPeppers)
        cout << " jalapeno-peppers";
    if (hasOlives)
        cout << " olives";
    cout << endl;
}

int main() {
    char
        ch;
    bool
        hasPepperoni=false,
        hasGPeppers=false,
        hasMushrooms=false,
        hasSausage=false,
        hasJPeppers=false,
        hasOlives=false;

    do {
        // clear screen
        cout << "\033[2J\033[H";

        // show current toppings
        showToppings(hasPepperoni,hasGPeppers,hasMushrooms,hasSausage,hasJPeppers,hasOlives);

        // display menu
        cout << "Choices:\n\n"
                "(P)epperoni\n"
                "(G)reen peppers\n"
                "(M)ushrooms\n"
                "(S)ausage\n"
                "(J)alapeno peppers\n"
                "(O)lives\n"
                "\n(Q)uit\n"
                "\nEnter your choice: ";

        // get choice
        cin >> ch;

        // process choice
        switch (ch) {
            case 'p':
            case 'P':
                hasPepperoni = !hasPepperoni;
                break;
            case 'g':
            case 'G':
                hasGPeppers = !hasGPeppers;
                break;
            case 'm':
            case 'M':
                hasMushrooms = !hasMushrooms;
                break;
            case 's':
            case 'S':
                hasSausage = !hasSausage;
                break;
            case 'j':
            case 'J':
                hasJPeppers = !hasJPeppers;
                break;
            case 'o':
            case 'O':
                hasOlives = !hasOlives;
                break;
            case 'q':
            case 'Q':
                break;
            default:
                cout << "Invalid choice: [" << ch << ']' << endl;
        }
    } while (ch != 'q' && ch != 'Q');     // loop while user has not selected quit

    // display chosen toppings
    showToppings(hasPepperoni,hasGPeppers,hasMushrooms,hasSausage,hasJPeppers,hasOlives);

    return 0;
}
