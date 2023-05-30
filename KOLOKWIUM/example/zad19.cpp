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
    int i = 2;
    int blizniacze = 0;
    while (blizniacze < 20) {
        if (czy_pierwsza(i) && czy_pierwsza(i + 2)) {
            cout << "(" << i << ", " << i+2 << ")" << endl;
            blizniacze++;
        }
        i++;
    }
    return 0;
}
// Wyjaśnienie:

// Definiujemy funkcję czy_pierwsza(n), która sprawdza, czy liczba n jest liczbą pierwszą.
// Zaczynamy od liczby 2.
// Dopóki nie znajdziemy 20 par liczb bliźniaczych, sprawdzamy, czy liczby i i i+2 są liczbami pierwszymi.
// Jeśli tak, to wypisujemy parę liczb bliźniaczych (i, i+2) na ekranie za pomocą cout.
// Zwiększamy blizniacze o 1 i przechodzimy do kolejnej liczby.
// Powtarzamy kroki 3-5 aż do znalezienia 20 par liczb bliźniaczych.