// Poniżej znajduje się kod programu, który oblicza wartość a^b dla podanych liczb całkowitych a i b. Program wykorzystuje 
// pętlę for do obliczania wyniku:

#include <iostream>

int main() {
    int a, b;
    long long wynik = 1; // Używamy typu long long, aby móc obliczać większe wartości

    std::cout << "Podaj liczbe a: ";
    std::cin >> a;

    std::cout << "Podaj liczbe b: ";
    std::cin >> b;

    for (int i = 0; i < b; i++) {
        wynik *= a;
    }

    std::cout << "Wynik a^b to: " << wynik << "\n";

    return 0;
}
// W tym programie, po wprowadzeniu dwóch liczb przez użytkownika, używamy pętli for do obliczenia a^b. Pętla zaczyna się od i = 0 
// i jest wykonywana do momentu, gdy i osiągnie wartość b. W każdym przejściu pętli, wynik jest mnożony przez a. Po wykonaniu b przejść pętli, wynik staje się a^b.