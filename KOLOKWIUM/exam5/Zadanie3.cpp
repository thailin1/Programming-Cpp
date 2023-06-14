#include <iostream>
using namespace std;

double obliczSume(int k) {
    double sum = 0.0;
    for (int i = 1; i <= k; i++) {
        sum += (i + 3) / (double)(i * i);
    }
    return sum;
}

int main() {
    int k;
    cout << "Podaj liczbe naturalna k: ";
    cin >> k;

    double wynik = obliczSume(k);

    cout << "Wartosc sumy S: " << wynik << endl;

    return 0;
}
