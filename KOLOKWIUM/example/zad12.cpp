#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj wartosc n: ";
    cin >> n;

    int i = 0;
    int k = 2;
    do
    {
        if(i < n) 
        {
        cout << k << " ";
        i++;
        }else // pętla idąca do nieskończoności.
        {
            k=k*k;
            i=i+1;
        }
    }while(!(i<n));
    return 0;
}
// Wyjaśnienie:

// Deklarujemy zmienną n jako liczbę całkowitą (typ int).
// Wypisujemy komunikat na ekranie, prosząc użytkownika o podanie wartości n za pomocą funkcji cout.
// Wczytujemy wartość n z klawiatury za pomocą funkcji cin.
// Deklarujemy zmienne i i k jako liczby całkowite i ustawiamy ich wartości na odpowiednio 0 i 2.
// Uruchamiamy pętlę while, która będzie wykonywać się dopóki i będzie mniejsze od n.
// Wewnątrz pętli wypisujemy wartość k na ekranie za pomocą funkcji cout.
// Zwiększamy wartość i o 1 za pomocą operatora ++.
// Sprawdzamy, czy i jest większe lub równe n.
// Jeśli tak, przerywamy pętlę za pomocą instrukcji break.
// Jeśli nie, podnosimy wartość k do kwadratu i ponownie sprawdzamy warunek w pętli.
// Po zakończeniu pętli zwracamy wartość 0 przez return 0.