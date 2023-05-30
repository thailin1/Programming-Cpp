#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b;

    cout << "Podaj a: ";
    cin >> a;

    cout << "Podaj b: ";
    cin >> b;

    if (a == 0) {
        if (b == 0) {
            cout << "Nieskończenie wiele rozwiązań" << endl;
        } else {
            cout << "Brak rozwiązań" << endl;
        }
    } else {
        double delta = b * b - 4 * a * (-1);

        if (delta < 0) {
            cout << "Brak rozwiązań" << endl;
        } else if (delta == 0) {
            double x = -b / (2 * a);
            cout << "x = " << x << endl;
        } else {
            double x1 = (-b - sqrt(delta)) / (2 * a);
            double x2 = (-b + sqrt(delta)) / (2 * a);
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }

    return 0;
}
// Wyjaśnienie:

// Deklarujemy zmienne a i b jako liczby zmiennoprzecinkowe (typ double).
// Wypisujemy komunikat na ekranie, prosząc użytkownika o podanie wartości a za pomocą funkcji cout.
// Wczytujemy wartość a z klawiatury za pomocą funkcji cin.
// Wypisujemy komunikat na ekranie, prosząc użytkownika o podanie wartości b za pomocą funkcji cout.
// Wczytujemy wartość b z klawiatury za pomocą funkcji cin.
// Sprawdzamy, czy wartość a jest równa 0:
// a. Jeśli tak, przechodzimy do kroku 7.
// b. Jeśli nie, przechodzimy do kroku 8.
// Użytkownik wprowadza liczby a i b za pomocą cin.
// Obliczamy deltę na podstawie wzoru delta = b^2 - 4a(1-a).
// Jeśli delta jest mniejsza od 0, równanie nie ma rozwiązań rzeczywistych i wyświetlamy odpowiedni komunikat.
// Jeśli delta jest równa 0, oblicjedno rozwiązanie równania na podstawie wzoru x = -b / (2*a*(1-a)).
// W przeciwnym przypadku, obliczamy dwa rozwiązania równania na podstawie wzoru x1 = (-b + sqrt(delta)) / (2a(1-a)) i x2 = (-b - sqrt(delta)) / (2a(1-a)).
// Wynik jest wyświetlany na ekranie za pomocą cout.