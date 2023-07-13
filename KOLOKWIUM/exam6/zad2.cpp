#include <iostream>

int main() {
    int liczba;

    // Wczytanie liczby
    std::cout << "Wprowadz liczbe calkowita: ";
    std::cin >> liczba;

    // Wypisanie liczby o wartości bezwzględnej równej 7, ale o znaku przeciwnym do wprowadzonej liczby
    if (liczba < 0) {
        std::cout << "Wynik: " << 7 << std::endl;
    } else {
        std::cout << "Wynik: " << -7 << std::endl;
    }

    return 0;
}

// Program ten wczytuje liczbę całkowitą i sprawdza, czy jest ona mniejsza od zera. Jeśli tak, wypisuje 7. Jeśli nie, wypisuje 
//-7. To zgodne z opisem zadania, które mówi o wypisaniu liczby o wartości bezwzględnej równej 7, ale o znaku przeciwnym do wprowadzonej liczby.