#include <iostream>
using namespace std;

int nwd(int a, int b) {
    while (b) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int nww(int a, int b) {
    return a * b / nwd(a, b);
}

int main() {
    int n, m;
    cout << "Podaj pierwsza liczbe: ";
    cin >> n;
    cout << "Podaj druga liczbe: ";
    cin >> m;
    cout << "Najmniejsza wspolna wielokrotnosc liczb " << n << " i " << m << " wynosi: " << nww(n, m) << endl;
    return 0;
}
// Wyjaśnienie:

// Definiujemy funkcję nwd(a, b), która zwraca największy wspólny dzielnik (NWD) liczb a i b wykorzystując algorytm Euklidesa.
// Definiujemy funkcję nww(a, b), która zwraca najmniejszą wspólną wielokrotność (NWW) liczb a i b wykorzystując wcześniej zdefiniowaną funkcję nwd(a, b).
// Użytkownik wprowadza dwie liczby n i m za pomocą cin.
// Wyświetlamy najmniejszą wspólną wielokrotność liczb n i m za pomocą funkcji nww(n, m) i cout.