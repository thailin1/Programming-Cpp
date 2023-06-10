#include <iostream>
#include <cmath>
using namespace std;

bool czyProstokatny(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return false;  // Niepoprawne długości boków, trójkąt nie może istnieć
    }

    // Sprawdzenie warunku trójkąta prostokątnego
    if (pow(a, 2) + pow(b, 2) == pow(c, 2) ||
        pow(a, 2) + pow(c, 2) == pow(b, 2) ||
        pow(b, 2) + pow(c, 2) == pow(a, 2)) {
        return true;  // Trójkąt jest prostokątny
    }

    return false;  // Trójkąt nie jest prostokątny
}

int main() {
    double a, b, c;

    cout << "Podaj dlugosci bokow trojkata: ";
    cin >> a >> b >> c;

    if (czyProstokatny(a, b, c)) {
        cout << "Trójkąt o bokach " << a << ", " << b << ", " << c << " jest prostokątny." << endl;
    } else {
        cout << "Trójkąt o bokach " << a << ", " << b << ", " << c << " nie jest prostokątny." << endl;
    }

    return 0;
}

// Opis programu:

// Deklarujemy funkcję czyProstokatny, która przyjmuje trzy argumenty a, b, c jako liczby rzeczywiste i zwraca wartość logiczną true lub false.
// W funkcji czyProstokatny sprawdzamy najpierw, czy długości boków są większe od zera. Jeśli nie, to trójkąt nie może istnieć, więc zwracamy false.
// Następnie sprawdzamy warunek trójkąta prostokątnego, porównując sumy kwadratów długości boków. Jeśli którykolwiek z warunków jest spełniony, zwracamy true, co oznacza, że trójkąt jest prostokątny.
// W funkcji main wczytujemy wartości a, b i c z klawiatury.
// Wywołujemy funkcję czyProstokatny i na podstawie jej wyniku wypisujemy odpowiedni komunikat na ekranie.
// Program kończy swoje działanie, zwracając wartość 0.
// Dzięki temu programowi użytkownik może sprawdzić, czy trójkąt o podanych długościach boków jest prostokątny.