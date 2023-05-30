#include <iostream>
using namespace std;

bool czy_pierwsza(int liczba) {
    if (liczba < 2) {
        return false;
    }
    for (int i = 2; i*i <= liczba; i++) {
        if (liczba % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    if (czy_pierwsza(liczba)) {
        cout << "Podana liczba jest pierwsza." << endl;
    } else {
        cout << "Podana liczba nie jest pierwsza." << endl;
    }
    return 0;
}

// Wyjaśnienie:

// Funkcja czy_pierwsza sprawdza, czy liczba jest pierwsza. Jeśli liczba jest mniejsza od 2, zwracana jest wartość false. W przeciwnym wypadku sprawdzamy, czy liczba dzieli się bez reszty przez jakąś liczbę z przedziału od 2 do pierwiastka kwadratowego z liczby (zaokrąglonego w górę). Jeśli tak, zwracamy wartość false. W przeciwnym wypadku zwracamy wartość true.
// Użytkownik wprowadza liczbę za pomocą cin.
// Wywołujemy funkcję czy_pierwsza i w zależności od jej wyniku wyświetlamy odpowiedni komunikat za pomocą cout.