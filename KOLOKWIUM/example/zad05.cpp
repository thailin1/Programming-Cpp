#include <iostream>
using namespace std;

int main() {
    float a, b, x;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    if (a == 0) {
        if (b == 1) {
            cout << "Rownanie jest spelnione dla kazdego x." << endl;
        } else {
            cout << "Rownanie nie ma rozwiazania." << endl;
        }
    } else {
        x = (1 - b) / a;
        cout << "Rozwiazanie rownania wynosi: x = " << x << endl;
    }
    return 0;
}
// Wyjaśnienie:

// Użytkownik wprowadza liczby a i b za pomocą cin.
// Jeśli a jest równe 0, sprawdzamy, czy b jest równe 1. Jeśli tak, wyświetlamy komunikat informujący, że równanie jest spełnione dla każdego x. W przeciwnym wypadku wyświetlamy komunikat, że równanie nie ma rozwiązania.
// W przeciwnym przypadku, obliczamy x na podstawie wzoru x = (1 - b) / a.
// Wyświetlamy wynik na ekranie za pomocą cout.