#include <iostream>
using namespace std;

int main() {
    int a, b, wynik = 1;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    for (int i = 0; i < b; i++) {
        wynik *= a;
    }
    cout << a << "^" << b << " = " << wynik << endl;
    return 0;
}
// Wyjaśnienie:

// Użytkownik wprowadza liczby całkowite/naturalne a i b za pomocą cin.
// Zmienna wynik jest inicjalizowana wartością 1.
// Pętla for iteruje b razy i mnoży aktualną wartość wyniku przez a.
// Wynik jest wyświetlany na ekranie za pomocą cout.