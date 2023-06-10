#include <iostream>
using namespace std;

int main() {
    int liczba1, liczba2;
    double srednia;

    cout << "Podaj pierwsza liczbe calkowita: ";
    cin >> liczba1;

    cout << "Podaj druga liczbe calkowita: ";
    cin >> liczba2;

    srednia = (liczba1 + liczba2) / 2.0;

    cout << "Srednia arytmetyczna podanych liczb to: " << srednia << endl;

    return 0;
}

// Opis programu:

// Deklarujemy zmienne liczba1 i liczba2 jako liczby całkowite oraz zmienną srednia jako liczbę rzeczywistą (typ double).
// Wypisujemy komunikat na ekranie, prosząc użytkownika o podanie pierwszej liczby całkowitej za pomocą funkcji cout.
// Wczytujemy wartość pierwszej liczby z klawiatury za pomocą funkcji cin.
// Wypisujemy komunikat na ekranie, prosząc użytkownika o podanie drugiej liczby całkowitej za pomocą funkcji cout.
// Wczytujemy wartość drugiej liczby z klawiatury za pomocą funkcji cin.
// Obliczamy średnią arytmetyczną podanych liczb poprzez dodanie liczba1 i liczba2, a następnie podzielenie przez 2.0 (aby otrzymać wynik jako liczbę rzeczywistą).
// Wypisujemy wynik na ekranie za pomocą funkcji cout.
// Program kończy swoje działanie, zwracając wartość 0.
// Dzięki temu programowi użytkownik może łatwo obliczyć średnią arytmetyczną dwóch podanych liczb całkowitych.