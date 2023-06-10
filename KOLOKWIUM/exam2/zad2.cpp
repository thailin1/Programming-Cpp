#include <iostream>
using namespace std;

int main() {
    double liczba1, liczba2;

    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;

    cout << "Podaj druga liczbe: ";
    cin >> liczba2;

    if (liczba1 > liczba2) {
        cout << "Wieksza liczba to: " << liczba1 << endl;
    } else {
        cout << "Wieksza liczba to: " << liczba2 << endl;
    }

    return 0;
}
