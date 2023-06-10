#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj wymiar przestrzeni R^n: ";
    cin >> n;

    int vector1[n];
    int vector2[n];

    cout << "Podaj pierwszy wektor o wymiarze " << n << ":" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Wprowadz element " << i + 1 << ": ";
        cin >> vector1[i];
    }

    cout << "Podaj drugi wektor o wymiarze " << n << ":" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Wprowadz element " << i + 1 << ": ";
        cin >> vector2[i];
    }

    int dotProduct = 0;
    for (int i = 0; i < n; i++) {
        dotProduct += vector1[i] * vector2[i];
    }

    cout << "Iloczyn skalarny podanych wektorów wynosi: " << dotProduct << endl;

    return 0;
}

// Opis programu:

// Wczytujemy od użytkownika wymiar przestrzeni R^n do zmiennej n.
// Tworzymy dwie tablice o rozmiarze n: vector1 i vector2.
// Wprowadzamy elementy pierwszego wektora do tablicy vector1 za pomocą pętli for.
// Wprowadzamy elementy drugiego wektora do tablicy vector2 za pomocą pętli for.
// Inicjalizujemy zmienną dotProduct jako 0.
// Obliczamy iloczyn skalarny dwóch wektorów za pomocą pętli for i sumując odpowiednie iloczyny elementów.
// Wypisujemy na ekranie wynik iloczynu skalarnego za pomocą funkcji cout.
// Program kończy swoje działanie, zwracając wartość 0.
// Dzięki temu programowi użytkownik może wprowadzić wymiar przestrzeni R^n oraz elementy dwóch wektorów, a następnie obliczyć iloczyn skalarny tych wektorów.