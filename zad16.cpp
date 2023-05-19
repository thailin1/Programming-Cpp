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

int main() {
    int n, m;
    cout << "Podaj pierwsza liczbe: ";
    cin >> n;
    cout << "Podaj druga liczbe: ";
    cin >> m;
    cout << "Najwiekszy wspolny dzielnik liczb " << n << " i " << m << " wynosi: " << nwd(n, m) << endl;
    return 0;
}
// Wyjaśnienie:

// Definiujemy funkcję nwd(a, b), która zwraca największy wspólny dzielnik (NWD) liczb a i b wykorzystując algorytm Euklidesa.
// Użytkownik wprowadza dwie liczby n i m za pomocą cin.
// Wyświetlamy największy wspólny dzielnik liczb n i m za pomocą funkcji nwd(n, m) i cout.