#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double liczba;
    cout << "Podaj liczbe wymierna: ";
    cin >> liczba;

    double wynik = -fabs(liczba) - 1;

    cout << "Liczba o wartosci bezwzględnej wiekszej o jeden, ale o przeciwnym znaku: " << wynik << endl;

    return 0;
}
