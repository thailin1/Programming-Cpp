#include <iostream>

using namespace std;

int main() {
    double a, b, pole;

    cout << "Podaj dlugosc boku a: ";
    cin >> a;

    cout << "Podaj dlugosc boku b: ";
    cin >> b;

    pole = a * b;

    cout << "Pole prostokata o bokach a = " << a << " i b = " << b << " wynosi: " << pole << endl;

    return 0;
}
