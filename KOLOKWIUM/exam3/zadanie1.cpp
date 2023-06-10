// W języku C++ istnieją dwa podstawowe rodzaje pętli: pętla for i pętla while.

// Pętla for:

// Pętla for jest najczęściej stosowana, gdy znamy liczbę iteracji, przez które chcemy przejść.
// Składnia pętli for składa się z trzech części: inicjalizacji, warunku i instrukcji iteracyjnej.
// Inicjalizacja określa początkową wartość zmiennej sterującej.
// Warunek określa warunek kontynuacji pętli.
// Instrukcja iteracyjna wykonuje się na końcu każdej iteracji i służy do modyfikowania wartości zmiennej sterującej.
// Przykład:

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << " ";
    }

    int i = 0;
    while (i < 5)
    {
        cout << i << " ";
        i++;
    }
    return 0;
}

// Wyjaśnienie:

// W tym przykładzie pętla for zostanie wykonana pięć razy.
// Na początku inicjalizujemy zmienną i wartością 0.
// Warunek pętli sprawdza, czy i jest mniejsze od 5. Jeśli tak, to wykonuje się instrukcja wewnątrz pętli.
// Po wykonaniu instrukcji iteracyjnej i jest zwiększane o 1.
// Wypisujemy wartość i na ekranie.
// Powtarzamy te kroki, dopóki warunek jest spełniony.
// Pętla while:

// Pętla while jest stosowana, gdy nie znamy dokładnej liczby iteracji i chcemy kontynuować, dopóki warunek jest spełniony.
// Składnia pętli while składa się z warunku i bloku kodu.
// Blok kodu wykonuje się tak długo, jak długo warunek jest prawdziwy.
// Przykład:
// Wyjaśnienie:

// W tym przykładzie pętla while będzie wykonana pięć razy.
// Na początku inicjalizujemy zmienną i wartością 0.
// Warunek pętli sprawdza, czy i jest mniejsze od 5. Jeśli tak, to wykonuje się blok kodu wewnątrz pętli.
// Po wykonaniu bloku kodu, zwiększamy wartość i o 1.
// Powtarzamy te kroki, dopóki warunek jest spełniony.
// Oba rodzaje pętli są przydatne w różnych sytuacjach. Pętla for jest często używana do iteracji przez znaną liczbę elementów,
// podczas gdy pętla while jest bardziej elastyczna i może być stosowana w przypadkach, gdy nie znamy dokładnej liczby iteracji
// lub gdy warunek jest bardziej skomplikowany.