#include <iostream>
using namespace std;

void faktoryzacja(int n) {
    int i = 2;
    while (n > 1) {
        if (n % i == 0) {
            n /= i;
            cout << i << endl;
        } else {
            i++;
        }
    }
}

int main() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    cout << "Czynniki pierwsze liczby " << n << " to:" << endl;
    faktoryzacja(n);
    return 0;
}
// Wyjaśnienie:

// Definiujemy funkcję faktoryzacja(n), która wyznacza wszystkie czynniki pierwsze liczby n i wypisuje je na ekranie.
// Zaczynamy od liczby 2.
// Dopóki n jest większe niż 1, sprawdzamy, czy i jest dzielnikiem n.
// Jeśli tak, to dzielimy n przez i i wypisujemy i na ekranie.
// Jeśli nie, to zwiększamy i o 1 i sprawdzamy kolejną liczbę.
// Użytkownik wprowadza liczbę n za pomocą cin.
// Wyświetlamy na ekranie czynniki pierwsze liczby n za pomocą funkcji faktoryzacja(n) i cout.