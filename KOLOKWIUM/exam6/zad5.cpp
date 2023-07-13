#include <iostream>

int main() {
    int n;

    // Wczytanie liczby elementów
    std::cout << "Podaj liczbe elementow: ";
    std::cin >> n;

    // Utworzenie wejściowej tablicy
    int* tablica = new int[n];
    for (int i = 0; i < n; i++) {
        std::cout << "Podaj element " << i << ": ";
        std::cin >> tablica[i];
    }

    // Utworzenie wyjściowej tablicy
    int* nowa_tablica = new int[2*n];
    for (int i = 0; i < n; i++) {
        nowa_tablica[2*i] = tablica[i];
        nowa_tablica[2*i+1] = 1;
    }

    // Wypisanie nowej tablicy
    for (int i = 0; i < 2*n; i++) {
        std::cout << "Element " << i << ": " << nowa_tablica[i] << std::endl;
    }

    // Usunięcie tablic
    delete[] tablica;
    delete[] nowa_tablica;

    return 0;
}

// Program ten wczytuje liczbę elementów i elementy wejściowej tablicy, następnie tworzy nową tablicę o podwójnej długości, 
// w której elementy na parzystych indeksach odpowiadają elementom wejściowej tablicy, a na nieparzystych indeksach są równe 
// 1. Na koniec wypisuje elementy nowej tablicy. Pamiętaj, że indeksowanie tablic w C++ zaczyna się od 0, więc parzyste indeksy 
// to 0, 2, 4, itd., a nieparzyste to 1, 3, 5, itd.
