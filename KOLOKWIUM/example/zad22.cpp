#include <iostream>
using namespace std;

int suma_cyfr(int n) {
    int suma = 0;
    while (n > 0) {
        int cyfra = n % 10;
        suma += cyfra;
        n /= 10;
    }
    return suma;
}

int main() {
    int liczba;
    cout << "Podaj liczbę naturalną: ";
    cin >> liczba;
    int wynik = suma_cyfr(liczba);
    cout << "Suma cyfr podanej liczby wynosi: " << wynik << endl;
    return 0;
}
// Wyjaśnienie:

// Definiujemy funkcję suma_cyfr(n), która liczy sumę cyfr liczby naturalnej n.
// Wczytujemy liczbę naturalną liczba z klawiatury za pomocą cin.
// Wywołujemy funkcję suma_cyfr z argumentem liczba i zapisujemy wynik do zmiennej wynik.
// Wypisujemy na ekranie wartość zmiennej wynik za pomocą cout.