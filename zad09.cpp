#include <iostream>
using namespace std;

int main() {
    int n, a = 2;
    cout << "Podaj liczbe n: ";
    cin >> n;
    cout << a << " ";
    for (int i = 2; i <= n; i++) {
        a = 1 + 2*a;
        cout << a << " ";
    }
    cout << endl;
    return 0;
}
// Wyjaśnienie:

// Użytkownik wprowadza liczbę naturalną n za pomocą cin.
// Zmienna a jest inicjalizowana wartością 2.
// Pierwszy wyraz ciągu a jest wyświetlany na ekranie za pomocą cout.
// Pętla for iteruje od 2 do n i wyznacza kolejne wyrazy ciągu na podstawie wzoru a_k+1 = 1 + 2*a_k. Każdy kolejny wyraz jest wyświetlany na ekranie za pomocą cout.
// Znak endl powoduje, że po wyświetleniu wyrazów ciągu następuje przejście do nowej linii.