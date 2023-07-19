// C++ oferuje kilka rodzajów pętli do wykonywania bloków kodu wielokrotnie, aż spełniony będzie określony warunek. 
// Główne typy pętli w C++ to: for, while i do-while.

// Pętla for: jest najczęściej używana do iteracji przez blok kodu określoną liczbę razy.

// Struktura pętli for jest następująca:


for (inicjalizacja; warunek; inkrementacja/dekrementacja) {
    // kod do wykonania
}
// Pętla while: wykonywana jest tak długo, jak warunek jest spełniony (czyli jest prawdziwy).

// Struktura pętli while jest następująca:


while (warunek) {
    // kod do wykonania
}
// Pętla do-while: podobna do pętli while, z tą różnicą, że warunek sprawdzany jest po wykonaniu bloku kodu, 
// co oznacza, że blok kodu zawsze wykonywany jest co najmniej raz.

// Struktura pętli do-while jest następująca:


do {
    // kod do wykonania
} while (warunek);
// Przykład użycia pętli for:


#include <iostream>

int main() {
    for (int i = 0; i < 5; i++) {
        std::cout << "Iteracja numer: " << i << "\n";
    }

    return 0;
}
// W tym programie pętla for jest używana do wykonania bloku kodu (który wyświetla numer iteracji) pięć razy. 
// Zmienna i jest zmienną iteracyjną, która jest zainicjowana wartością 0 i inkrementowana o 1 po każdej iteracji. 
// Pętla jest wykonywana do momentu, gdy i osiągnie wartość 5.