#include <iostream>
using namespace std;

int main() {
    int n, iloczyn = 1;
    cout << "Podaj liczbe n: ";
    cin >> n;
    for (int i = 2; i <= 2*n; i += 2) {
        iloczyn *= i;
    }
    cout << "Iloczyn wynosi: " << iloczyn << endl;
    return 0;
}
// Wyjaśnienie:

// Użytkownik wprowadza liczbę n za pomocą cin.
// Zmienna iloczyn jest inicjalizowana wartością 1.
// Pętla for iteruje od 2 do 2n włącznie, z krokiem 2 (czyli tylko po parzystych liczbach), mnożąc aktualną wartość iloczynu przez i.
// Wynik jest wyświetlany na ekranie za pomocą cout.