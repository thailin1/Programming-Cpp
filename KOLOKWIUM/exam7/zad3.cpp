// Oto prosty kod programu w C++, który oblicza średnią arytmetyczną dwóch liczb całkowitych wprowadzonych przez użytkownika:

#include <iostream>

int main() {
    int liczba1, liczba2;
    
    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> liczba1;
    
    std::cout << "Podaj druga liczbe: ";
    std::cin >> liczba2;
    
    double srednia = (liczba1 + liczba2) / 2.0;
    
    std::cout << "Srednia arytmetyczna podanych liczb to: " << srednia << "\n";
    
    return 0;
}
// W tym programie:

// Zmienne liczba1 i liczba2 są używane do przechowywania liczb wprowadzonych przez użytkownika.
// Użytkownik jest proszony o wprowadzenie dwóch liczb, które są czytane za pomocą std::cin.
// Średnia arytmetyczna tych dwóch liczb jest obliczana jako (liczba1 + liczba2) / 2.0. Pamiętaj, że dzielimy przez 2.0, a nie przez 2, aby zapewnić poprawne obliczenie średniej jako liczby zmiennoprzecinkowej.
// Wynik jest następnie wyświetlany na ekranie za pomocą std::cout.