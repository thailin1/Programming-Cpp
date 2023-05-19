#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Podaj liczbe n: ";
    cin >> n;
    for (int i = 2; i < n; i += 2) {
        suma += i;
    }
    cout << "Suma liczb parzystych mniejszych od " << n << " wynosi: " << suma << endl;
    return 0;
}
// Wyjaśnienie:

// Użytkownik wprowadza liczbę n za pomocą cin.
// Zmienna suma jest inicjalizowana wartością 0.
// Pętla for iteruje od 2 do n-1 z krokiem 2 (czyli tylko po parzystych liczbach), dodając każdą kolejną liczbę parzystą do zmiennej suma.
// Wynik jest wyświetlany na ekranie za pomocą cout.