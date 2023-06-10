#include <iostream>
using namespace std;

int main() {
    int liczba;

    cout << "Podaj liczbe naturalna: ";
    cin >> liczba;

    cout << "Dzielniki liczby " << liczba << ": ";

    for (int i = 1; i <= liczba; i++) {
        if (liczba % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}

//Opis programu:

// Wczytujemy od użytkownika liczbę naturalną do zmiennej liczba.
// Wypisujemy na ekranie komunikat informujący o tym, że będziemy wypisywać dzielniki podanej liczby.
// Uruchamiamy pętlę for, która iteruje od 1 do wartości podanej liczby.
// Wewnątrz pętli sprawdzamy, czy aktualna wartość i jest dzielnikiem liczby. Jeśli tak, to wypisujemy go na ekranie.
// Po zakończeniu pętli, wypisujemy na ekranie znak nowej linii.
// Program kończy swoje działanie, zwracając wartość 0.
// Dzięki temu programowi użytkownik może wprowadzić liczbę naturalną, a następnie program wypisze wszystkie jej dzielniki.