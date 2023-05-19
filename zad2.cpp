#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Podaj pierwsza liczbe: ";
    cin >> a;

    cout << "Podaj druga liczbe: ";
    cin >> b;

    if (a > b) {
        cout << "Wieksza liczba to " << a << endl;
    } else {
        cout << "Wieksza liczba to " << b << endl;
    }

    return 0;
}
