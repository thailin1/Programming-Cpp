#include <iostream>
#include <cmath>
using namespace std;

bool czyPierwsza(int n) {
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

bool czyZlozona(int n) {
    return !czyPierwsza(n);
}

bool czyPitagorejska(int a, int b, int c) {
    return (a * a + b * b == c * c);
}

bool czyBlizniacze(int p, int q) {
    return (czyPierwsza(p) && czyPierwsza(q) && abs(p - q) == 2);
}

int main() {
    int liczba;

    cout << "Sprawdzanie właściwości liczby całkowitej" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Podaj liczbę całkowitą: ";
    cin >> liczba;

    if (czyPierwsza(liczba)) {
        cout << liczba << " jest liczbą pierwszą." << endl;
    } else {
        cout << liczba << " jest liczbą złożoną." << endl;
    }

    if (czyPitagorejska(3, 4, liczba)) {
        cout << liczba << " jest liczbą pitagorejską." << endl;
    }

    for (int i = liczba - 1; i >= 2; i--) {
        if (czyBlizniacze(i, liczba)) {
            cout << liczba << " jest liczbą bliźniaczą z " << i << "." << endl;
            break;
        }
    }

    return 0;
}
