#include <iostream>
using namespace std;

int main() {
    float liczba, suma = 0;
    int licznik = 0;
    while (true) {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        if (liczba == 0) {
            break;
        }
        suma += liczba;
        licznik++;
    }
    cout << "Suma wprowadzonych liczb wynosi: " << suma << endl;
    cout << "Ilosc wprowadzonych liczb wynosi: " << licznik+1 << endl;
    return 0;
}
// Wyjaśnienie:

// Zmienne suma i licznik są inicjalizowane wartością 0.
// Pętla while wykonuje się w nieskończoność.
// W każdej iteracji użytkownik wprowadza liczbę za pomocą cin. Jeśli liczba jest równa 0, pętla jest przerywana za pomocą instrukcji break. W przeciwnym przypadku, liczba jest dodawana do zmiennej suma i zwiększana jest wartość zmiennej licznik.
// Po zakończeniu pętli, wyświetlamy sumę wprowadzonych liczb oraz ilość wprowadzonych liczb (włącznie z zerem) za pomocą instrukcji cout.