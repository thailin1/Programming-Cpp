#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1, y1, r1;
    cout << "Podaj współrzędną x1 środka okręgu 1: ";
    cin >> x1;
    cout << "Podaj współrzędną y1 środka okręgu 1: ";
    cin >> y1;
    cout << "Podaj promień r1 okręgu 1: ";
    cin >> r1;

    float x2, y2, r2;
    cout << "Podaj współrzędną x2 środka okręgu 2: ";
    cin >> x2;
    cout << "Podaj współrzędną y2 środka okręgu 2: ";
    cin >> y2;
    cout << "Podaj promień r2 okręgu 2: ";
    cin >> r2;

    float odleglosc_srodkow = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (odleglosc_srodkow <= r1 + r2) {
        cout << "Okręgi mają punkty wspólne." << endl;
    } else {
        cout << "Okręgi nie mają punktów wspólnych." << endl;
    }

    return 0;
}
// Wyjaśnienie:

// Deklarujemy zmienne x1, y1, r1, x2, y2 i r2 jako liczby zmiennoprzecinkowe (typ float).
// Wypisujemy na ekranie komunikat proszący o podanie współrzędnej x1 środka okręgu 1 za pomocą funkcji cout.
// Wczytujemy współrzędną x1 z klawiatury za pomocą funkcji cin.
// Wypisujemy na ekranie komunikat proszący o podanie współrzędnej y1 środka okręgu 1 analogicznie do kroku 2.
// Wczytujemy współrzędną y1 z klawiatury analogicznie do kroku 3.
// Wypisujemy na ekranie komunikat proszący o podanie promienia r1 okręgu 1 analogicznie do kroku 2.
// Wczytujemy promień r1 z klawiatury analogicznie do kroku 3.
// Wypisujemy na ekranie komunikat proszący o podanie współrzędnej x2 środka okręgu 2 analogicznie do kroku 2.
// Wczytujemy współrzędną x2 z klawiatury analogicznie do kroku 3.
// Wypisujemy na ekranie komunikat proszący o podanie współrzędnej y2 środka okręgu 2 analogicznie do kroku 2.
// Wczytujemy współrzędną y2 z klawiatury analogicznie do kroku 3.
// Wypisujemy na ekranie komunikat proszący o podanie promienia r2 okręgu 2 analogicznie do kroku 6.
// Wczytujemy promień r2 z klawiatury analogicznie do kroku 7.
// Obliczamy odległość między środkami okręgów jako pierwiastek kwadratowy sumy kwadratów różnic współrzędnych za pomocą funkcji sqrt i pow.
// Sprawdzamy, czy odległość między środkami okręgów jest mniejsza lub równa sumie promieni.
// Jeśli tak, to wypisujemy na ekranie komunikat mówiący, że okręgi mają punkty wspólne, w przeciwnym wypadku wypisujemy, że okręgi nie mają punktów wspólnych.