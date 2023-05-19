#include <iostream>
#include <vector>
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
    int n = 2;
    int znalezione = 0;
    while (znalezione < 5) {
        int a = n * n - 1;
        vector<int> dzielniki;
        for (int i = 2; i < a; i++) {
            if (a % i == 0 && czy_pierwsza(i)) {
                dzielniki.push_back(i);
            }
        }
        if (dzielniki.size() == 3) {
            cout << n << "^2 - 1 = " << a << " = " << dzielniki[0] << " * " << dzielniki[1] << " * " << dzielniki[2] << endl;
            znalezione++;
        }
        n++;
    }
    return 0;
}
// Wyjaśnienie:
// Definiujemy funkcję czy_pierwsza(n), która sprawdza, czy liczba n jest liczbą pierwszą.
// Zaczynamy od liczby n=2.
// Dopóki nie znajdziemy 5
// Liczb spełniających warunek zadania, sprawdzamy dla każdej liczby n wartość wyrażenia a = n^2 - 1 i jej dzielniki pierwsze.
// Jeśli a ma trzy różne dzielniki pierwsze, wypisujemy n, a oraz te dzielniki na ekranie za pomocą cout.
// Zwiększamy znalezione o 1 i przechodzimy do kolejnej liczby n.
// Powtarzamy kroki 3-5 aż do znalezienia 5 liczb spełniających warunek zadania.