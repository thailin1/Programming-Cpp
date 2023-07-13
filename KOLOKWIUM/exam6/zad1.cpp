#include <iostream>

int main() {
    int a, b, c;

    // Wczytanie trzech liczb
    std::cout << "Podaj trzy liczby calkowite: ";
    std::cin >> a >> b >> c;

    // Obliczenie i wypisanie średniej
    double srednia = static_cast<double>(a + b + c) / 3;
    std::cout << "Srednia tych liczb to: " << srednia << std::endl;

    return 0;
}

// W tym programie, trzy liczby są wczytywane ze standardowego wejścia. Następnie obliczana jest ich średnia, 
// która jest wypisywana na standardowe wyjście. Używamy static_cast<double>(), aby zapewnić, że wynik dzielenia 
// jest liczbą zmiennoprzecinkową, nawet jeśli wszystkie trzy liczby są liczbami całkowitymi.