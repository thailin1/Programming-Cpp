#include <iostream>
using namespace std;

int obliczWyraz(int n) {
    if (n == 1 || n == 2) {
        return 3;
    } else {
        int an = 0;

        for (int i = 3; i <= n; i++) {
            an = 2 * obliczWyraz(n-2) + 5 * obliczWyraz(n-1) + 1;

        }

        return an;
    }
}

int main() {
    int n;
    cout << "Podaj liczbę naturalną n: ";
    cin >> n;

    int wynik = obliczWyraz(n);

    cout << "n-ty wyraz ciągu: " << wynik << endl;

    return 0;
}
