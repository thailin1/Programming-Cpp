#include <iostream>
#include <cmath>
using namespace std;

bool czy_pierwsza(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;
    cout << "Podaj pierwszą liczbę: ";
    cin >> a;
    cout << "Podaj drugą liczbę: ";
    cin >> b;
    if (czy_pierwsza(a) && czy_pierwsza(b)) {
        cout << "Obie liczby są pierwsze." << endl;
    } else {
        cout << "Co najmniej jedna z podanych liczb nie jest liczbą pierwszą." << endl;
    }
    return 0;
}
// Wyjaśnienie:

// Definiujemy funkcję czy_pierwsza(n), która sprawdza, czy liczba n jest liczbą pierwszą.
// Wczytujemy dwie liczby całkowite a i b z klawiatury za pomocą cin.
// Sprawdzamy, czy obie liczby są pierwsze, korzystając z funkcji czy_pierwsza.
// Jeśli tak, to wypisujemy informację "Obie liczby są pierwsze" na ekranie za pomocą cout.
// W przeciwnym razie, wypisujemy informację "Co najmniej jedna z podanych liczb nie jest liczbą pierwszą" za pomocą cout.