//Opisać działanie następującej funkcji

#include <iostream>
#include <vector>
#include <math.h>

double funkcja1(double a, double b, unsigned n)
{
double zmienna1;
if (b == 1)
return n*a;
else
{
zmienna1 = a * (1 - pow(b, n))/(1 - b);
return zmienna1;
}
}

int main()
{
    funkcja1(2,1,9);
    std::cout << "zwraca:" << funkcja1(2,1,9) << "\n";
}
//Jaką wartość zwróci, gdy wywołamy ją z argumentami (2, 1, 9)


// Ta funkcja oblicza i zwraca wynik jednego z dwóch różnych wyrażeń matematycznych, w zależności od wartości drugiego argumentu (b).

// Jeśli b jest równe 1, funkcja zwraca iloczyn n i a. W przypadku, gdy b nie jest równe 1, oblicza i zwraca wartość wyrażenia a * 
// (1 - pow(b, n)) / (1 - b), gdzie pow(b, n) oznacza b podniesione do potęgi n.

// Jeśli wywołasz funkcję z argumentami (2, 1, 9), warunek if (b == 1) będzie spełniony, ponieważ drugi argument b jest równy 1. 
// W rezultacie, funkcja zwróci n * a, czyli 9 * 2, co daje wynik 18.