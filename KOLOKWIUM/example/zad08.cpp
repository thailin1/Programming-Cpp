#include <iostream>
using namespace std;

int main() {
    int a, i;

    do {
        cin >> a;
        if (a > 0 && a < 100) {
            i = 2;
            do{
            if (a == i) {
                cout << "Liczba a jest parzysta." << endl;
                break;
            } else {
                    i += 2;
                    if (i > a) {
                        cout << "Liczba a nie jest parzysta." << endl;
                        break;
                    }
            }
            }while(!(i>a));
        }
    } while (!(a > 0 && a < 100));

    return 0;
}
// Wyjaśnienie:

// Deklarujemy zmienne a i i jako liczby całkowite (typ int).
// Tworzymy pętlę do...while, która będzie wykonywać się przynajmniej raz, dopóki wartość a jest nieujemna.
// Wczytujemy wartość a z klawiatury za pomocą funkcji cin.
// Sprawdzamy, czy wartość a jest większa od 0 i mniejsza od 100.
// Jeśli tak, to ustawiamy zmienną i na wartość 2 i przechodzimy do kolejnego kroku, jeśli nie, to kontynuujemy pętlę.
// Sprawdzamy, czy wartość a jest równa i.
// Jeśli tak, to wypisujemy na ekranie komunikat mówiący, że a jest liczbą parzystą.
// Jeśli nie, to przechodzimy do kolejnego kroku.
// Tworzymy pętlę while, która będzie wykonywać się dopóki zmienna i będzie mniejsza od wartości a.
// Zwiększamy zmienną i o 2.
// Sprawdzamy, czy wartość i jest większa od a.
// Jeśli tak, to wypisujemy na ekranie komunikat mówiący, że a nie jest liczbą parzystą i przerywamy pętlę za pomocą słowa kluczowego break.
// Jeśli nie, to sprawdzamy, czy i jest równe a.