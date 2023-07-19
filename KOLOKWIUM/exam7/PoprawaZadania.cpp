// Zadanie, które opisujesz, wydaje się nieco skomplikowane, zwłaszcza biorąc pod uwagę operacje na tablicy dla liczb wymiernych. 
// Z drugiej strony, operacje na tablicy są bardziej typowe dla manipulacji na ciągach znaków. Niemniej jednak, operacje matematyczne,
//  które opisujesz, mogą być łatwo zrealizowane w C++. Oto prosta implementacja:


#include <iostream>
#include <cmath>

int main() {
    double liczba;

    // Wczytanie liczby
    std::cout << "Wprowadz liczbe: ";
    std::cin >> liczba;

    // Obliczenie wartości bezwzględnej i zmiana znaku
    liczba = (std::abs(liczba) + 1) * (liczba > 0 ? -1 : 1);

    // Wypisanie wyniku
    std::cout << "Wynik: " << liczba << std::endl;

    return 0;
}
// Program ten wczytuje liczbę wymierną, oblicza jej wartość bezwzględną przy użyciu funkcji std::abs(), dodaje do niej 1, a następnie mnoży 
// przez -1, jeśli początkowa liczba była dodatnia, lub przez 1, jeśli była ujemna. Wynik jest następnie wypisywany na ekran.

// Operacje na tablicach byłyby bardziej skomplikowane i niejasne, zwłaszcza przy manipulacji liczb zmiennoprzecinkowych, co mogłoby prowadzić 
// do błędów zaokrąglenia. W przypadku całkowitego przesunięcia cyfr w liczbie wymagałoby konwersji liczby na ciąg znaków, manipulacji na ciągu,
//  a następnie konwersji z powrotem na liczbę, co jest zdecydowanie mniej wydajne i trudniejsze do zaimplementowania.