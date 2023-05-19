#include <iostream>
#include <cmath>
using namespace std;

bool czy_liczba_armstronga(int n) {
    int k = log10(n) + 1;
    int suma = 0;
    int temp = n;
    while (temp > 0) {
        int cyfra = temp % 10;
        suma += pow(cyfra, k);
        temp /= 10;
    }
    return n == suma;
}

int main() {
    for (int n = 10; n < 100; n++) {
        if (czy_liczba_armstronga(n)) {
            cout << n << " ";
        }
    }
    cout << endl;
    return 0;
}
// Wyjaśnienie:

// Definiujemy funkcję czy_liczba_armstronga(n), która sprawdza, czy liczba naturalna n jest liczbą Armstronga.
// Obliczamy wartość k jako logarytm dziesiętny liczby n z zaokrągleniem w górę (liczba cyfr).
// Inicjalizujemy zmienną suma wartością 0 oraz zapisujemy wartość n w zmiennej tymczasowej temp.
// W pętli while, zaczynając od końca liczby n, obliczamy sumę k-tych potęg kolejnych cyfr liczby n.
// Jeśli wynik sumy jest równy liczbie n, to funkcja zwraca wartość true.
// W pętli