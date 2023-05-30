#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Podaj wartości a, b i c: ";
    cin >> a >> b >> c;

    if (a > b) {
        a = b + 4;
        c = b + 2;
        if (a > c) {
            a = b - c;
            b = 0;
            cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
        } else {
            a = b + c;
            c = 0;
            cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
        }
    } else {
        if (a > c) {
            a = a - c;
            b = b + 7;
            cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
        } else {
            a = 1 + c;
            c = b;
            cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
        }
    }

    return 0;
}
// Wyjaśnienie:

// Deklarujemy zmienne a, b i c jako liczby całkowite (typ int).
// Wypisujemy komunikat na ekranie, prosząc użytkownika o podanie wartości a, b i c za pomocą funkcji cout.
// Wczytujemy wartości a, b i c z klawiatury za pomocą funkcji cin.
// Sprawdzamy, czy a jest większe od b.
// Jeśli tak, to ustawiamy a na wartość b + 4 i c na wartość b + 2.
// Sprawdzamy, czy a jest większe od c.
// Jeśli tak, to ustawiamy a na wartość b - c, b na wartość 0 i wypisujemy wartości a, b i c na ekranie.
// Jeśli nie, to ustawiamy a na wartość b + c, c na wartość 0 i wypisujemy wartości a, b i c na ekranie.
// Jeśli a nie jest większe od b, to sprawdzamy, czy a jest większe od c.
// Jeśli tak, to ustawiamy a na wartość a - c, b na wartość b + 7 i wypisujemy wartości a, b i c na ekranie.
// Jeśli nie, to ustawiamy a na wartość 1 + c, c na wartość b i wypisujemy wartości a, b i c na ekranie.