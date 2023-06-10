#include <iostream>
#include <math.h>

using namespace std;

double funkcjanowa(double a, double b, unsigned n)
{
    double zmienna1;
    if (b == 1)
        return n * a;
    else
    {
        zmienna1 = a * (1 - pow(b, n)) / (1 - b);
        return zmienna1;
    }
}

int main(int argc, char const *argv[])
{
    cout << funkcjanowa(2, 3, 4) << " ";
    return 0;
}

// Opis działania funkcji funkcjanowa:

// Jeśli wywołamy funkcję funkcjanowa(2, 3, 4), to wartość zwrócona wynosi 80. Przeanalizujmy to krok po kroku:

// Podane argumenty to a = 2, b = 3, n = 4.
// Warunek b == 1 nie jest spełniony, więc wykonuje się blok kodu w linii 7-9.
// Obliczamy wartość zmiennej zmienna1 zgodnie ze wzorem: zmienna1 = 2 * (1 - pow(3, 4)) / (1 - 3).
// pow(3, 4) oznacza podniesienie liczby 3 do potęgi 4, co daje wynik 81.
// Obliczamy 1 - 81, co daje wartość -80.
// Następnie dzielimy -80 przez 1 - 3, co daje wynik 80.
// Funkcja zwraca wartość zmienna1, czyli 80.
// Zatem wynik wywołania funkcji funkcjanowa(2, 3, 4) to 80.