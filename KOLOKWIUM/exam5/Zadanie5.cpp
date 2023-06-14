#include <iostream>

void przesunWPrawo(int tablica[], int rozmiar) {
    int ostatni = tablica[rozmiar - 1];
    for (int i = rozmiar - 1; i > 0; i--) {
        tablica[i] = tablica[i - 1];
    }
    tablica[0] = ostatni;
}

int main() {
    int rozmiar;
    std::cout << "Podaj rozmiar tablicy (n > 1): ";
    std::cin >> rozmiar;

    if (rozmiar <= 1) {
        std::cout << "Nieprawidlowy rozmiar tablicy." << std::endl;
        return 0;
    }

    int* tablica = new int[rozmiar];
    std::cout << "Podaj elementy tablicy:" << std::endl;
    for (int i = 0; i < rozmiar; i++) {
        std::cout << "Element " << i << ": ";
        std::cin >> tablica[i];
    }

    przesunWPrawo(tablica, rozmiar);

    std::cout << "Tablica po przesunieciu w prawo:" << std::endl;
    for (int i = 0; i < rozmiar; i++) {
        std::cout << tablica[i] << " ";
    }
    std::cout << std::endl;

    delete[] tablica;

    return 0;
}
