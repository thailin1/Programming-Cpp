#include <iostream>
using namespace std;

int main() {
    float liczba, suma = 0;
    int licznik = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        if (liczba > 0) {
            suma += liczba;
            licznik++;
        }
    }
    cout << "Suma wprowadzonych liczb dodatnich wynosi: " << suma << endl;
    cout << "Ilosc wprowadzonych liczb dodatnich wynosi: " << licznik << endl;
    return 0;
}
// Wyjaśnienie:

// Zmienna suma jest inicjalizowana wartością 0, a zmienna licznik wartością 0.
// Pętla for iteruje 5 razy i przy każdej iteracji użytkownik wprowadza liczbę za pomocą cin. Jeśli liczba jest większa od 0, dodajemy ją do zmiennej suma i zwiększamy wartość zmiennej licznik.
// Wynik jest wyświetlany na ekranie za pomocą cout.