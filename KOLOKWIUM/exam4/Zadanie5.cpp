#include <iostream>
using namespace std;

int ciagRekurencyjny(int n) {
    if (n == 1 || n == 2) {
        return 1; // Pierwsze dwa wyrazy ciągu
    } else {
        return ciagRekurencyjny(n - 1) + ciagRekurencyjny(n - 2); // Wzór rekurencyjny
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
