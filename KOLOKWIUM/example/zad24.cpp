#include <iostream>
using namespace std;

int main() {
    float a, b;
    cout << "Podaj długość boku a: ";
    cin >> a;
    cout << "Podaj długość boku b: ";
    cin >> b;
    float pole = a * b;
    cout << "Pole prostokąta o bokach " << a << " i " << b << " wynosi: " << pole << endl;
    return 0;
}
// Wyjaśnienie:

// Deklarujemy zmienne a i b jako liczby zmiennoprzecinkowe (typ float).
// Wypisujemy na ekranie komunikat proszący o podanie długości boku a za pomocą funkcji cout.
// Wczytujemy długość boku a z klawiatury za pomocą funkcji cin.
// Wypisujemy na ekranie komunikat proszący o podanie długości boku b za pomocą funkcji cout.
// Wczytujemy długość boku b z klawiatury analogicznie do kroku 3.
// Obliczamy pole prostokąta jako iloczyn długości boków i zapisujemy wynik do zmiennej pole.
// Wypisujemy na ekranie wartość zmiennej pole za pomocą funkcji cout.