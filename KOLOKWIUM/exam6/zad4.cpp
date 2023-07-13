#include <iostream>

// Funkcja pomocnicza do obliczenia n-tego wyrazu ciągu
int ObliczWyraz(int n) {
    if (n == 1 || n == 2) {
        return 4;
    } else {
        return 3*ObliczWyraz(n-1) + 7*ObliczWyraz(n-2) - 2;
    }
}

// Główna funkcja
int main() {
    int n;

    // Wczytanie liczby
    std::cout << "Podaj liczbe naturalna: ";
    std::cin >> n;

    // Obliczenie i wypisanie wyniku
    int wynik = ObliczWyraz(n);
    std::cout << "n-ty wyraz ciagu to: " << wynik << std::endl;

    return 0;
}

// Pamiętaj, że powyższy program wykorzystuje rekursję do obliczenia n-tego wyrazu ciągu, co może prowadzić 
// do dużej liczby wywołań funkcji dla dużych n, potencjalnie przekraczając limit głębokości stosu wywołań. 
// Dla dużych n, lepiej byłoby zastosować podejście iteracyjne i zapamiętać poprzednie dwa wyrazy ciągu w zmiennych, 
// zamiast obliczać je za każdym razem.