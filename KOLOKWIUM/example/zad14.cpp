#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> dzielniki;
    cout << "Podaj liczbe: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            dzielniki.push_back(i);
        }
    }
    cout << "Dzielniki liczby " << n << ": ";
    for (int d : dzielniki) {
        cout << d << " ";
    }
    cout << endl;
    return 0;
}
// Wyjaśnienie:

// Użytkownik wprowadza liczbę n za pomocą cin.
// Tworzymy pusty wektor dzielniki, do którego będziemy dodawać dzielniki liczby n.
// Pętla for iteruje od 1 do n i sprawdza, czy n jest podzielne przez i bez reszty. Jeśli tak, to i jest dodawane do wektora dzielniki.
// Po zakończeniu pętli, wyświetlamy wszystkie dzielniki liczby n za pomocą pętli for i instrukcji cout.





