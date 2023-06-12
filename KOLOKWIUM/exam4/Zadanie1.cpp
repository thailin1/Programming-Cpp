#include <iostream>

using namespace std;

int ciagRekurencyjny(int n) {
    if (n == 1) {
        return 5; // Pierwszy wyraz ciągu
    } else {
        return 2 * ciagRekurencyjny(n - 1) + 3; // Wzór rekurencyjny
    }
}

int main() {
    int n;
    cout << "Podaj numer wyrazu ciągu: ";
    cin >> n;

    int wynik = ciagRekurencyjny(n);
    cout << "Wartość " << n << "-tego wyrazu ciągu wynosi: " << wynik << endl;

    return 0;
}
