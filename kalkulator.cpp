#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Prosty Kalkulator" << endl;
    cout << "Podaj pierwsza liczbe: ";
    cin >> num1;

    cout << "Podaj operator (+, -, *, /): ";
    cin >> op;

    cout << "Podaj druga liczbe: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << "Wynik: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Wynik: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Wynik: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Wynik: " << num1 / num2 << endl;
            } else {
                cout << "Blad: Nie mozna dzielic przez zero!" << endl;
            }
            break;
        default:
            cout << "Blad: Niepoprawny operator!" << endl;
    }

    return 0;
}
