#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, pole;

    cout << "Podaj dlugosc boku x: ";
    cin >> x;

    pole = pow(x, 2) * sqrt(3) / 4;

    cout << "Pole czworokata foremnego o boku x = " << x << " wynosi: " << pole << endl;

    return 0;
}
