#include <iostream>
using namespace std;

//Task: define a function Arithmetic() that takes two
// Floats as an input and it displays
// their sum, difference, product
// Prototype

void Arithmatic (float f1, float f2);

int main() {

    float num1, num2;
    char answer;

    while (1) {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        Arithmatic(num1, num2);

        cout << "\nWould you like to do it again? (y/n)";
        cin >> answer;

        if (answer == 'n') {
            break;
        }
    }
    return 0;
}

void Arithmatic (float f1, float f2) {

    cout << "\nThe sum of these floats are " << f1 + f2 << endl;
    cout << "The difference of these floats are " << f1 - f2 << endl;
    cout << "The product of these floats are " << f1 * f2 << endl;


    return;
}