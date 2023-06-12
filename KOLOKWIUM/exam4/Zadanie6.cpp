#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj liczbę elementów: ";
    cin >> n;

    double tablica[n]; // Deklaracja tablicy o rozmiarze n

    // Wprowadzanie elementów do tablicy
    cout << "Wprowadź " << n << " elementów do tablicy:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> tablica[i];
    }

    // Obliczanie sumy elementów
    double suma = 0.0;
    for (int i = 0; i < n; i++) {
        suma += tablica[i];
    }

    // Obliczanie średniej
    double srednia = suma / n;

    // Wyświetlanie wyniku
    cout << "Średnia elementów: " << srednia << endl;

    return 0;
}
