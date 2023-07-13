#include <iostream>
#include <cmath>

int main() {
    int n;

    // Wczytanie liczby
    std::cout << "Podaj liczbe calkowita: ";
    std::cin >> n;

    // Obliczenie i wypisanie wyniku
    int wynik = static_cast<int>(std::sqrt(n));
    std::cout << "[sqrt(n)] = " << wynik << std::endl;

    return 0;
}

// W tym programie, liczba n jest wczytywana ze standardowego wejścia. Następnie, używamy funkcji std::sqrt() z biblioteki 
// <cmath> do obliczenia pierwiastka kwadratowego z n. Ponieważ std::sqrt() zwraca wartość zmiennoprzecinkową, musimy ją 
// przekonwertować do liczby całkowitej za pomocą static_cast<int>(). Ponieważ konwersja do int zawsze zaokrągla w dół, 
// otrzymujemy największą liczbę całkowitą mniejszą lub równą pierwiastkowi z n. Wreszcie, wynik jest wypisywany na standardowe wyjście.