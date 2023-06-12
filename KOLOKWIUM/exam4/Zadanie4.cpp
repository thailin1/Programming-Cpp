#include <iostream>
#include <math.h>
using namespace std;

double liczbaPrzeciwna(double liczba) {
    return -1 * abs(liczba);
}

int main() {
    double liczba;

    cout << "Podaj liczbę rzeczywistą: ";
    cin >> liczba;

    double przeciwna = liczbaPrzeciwna(liczba);

    cout << "Liczba przeciwna: " << przeciwna << endl;

    return 0;
}
