//Poniżej znajduje się kod programu, który wczytuje liczby rzeczywiste do tablicy n-elementowej i oblicza ich średnią:


#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Podaj liczbe elementow tablicy: ";
    std::cin >> n;

    std::vector<double> tablica(n);
    
    for(int i = 0; i < n; i++) {
        std::cout << "Podaj element " << (i + 1) << ": ";
        std::cin >> tablica[i];
    }
    
    double suma = 0.0;
    
    for(int i = 0; i < n; i++) {
        suma += tablica[i];
    }

    double srednia = suma / n;
    
    std::cout << "Srednia elementow tablicy to: " << srednia << "\n";
    
    return 0;
}
// W tym programie:

// Użytkownik jest proszony o podanie liczby n, która określa liczbę elementów tablicy. Tablica jest tworzona jako vector o rozmiarze n.
// Kolejno wczytywane są liczby rzeczywiste od użytkownika, które są dodawane do tablicy.
// Następnie dla każdego elementu tablicy dodawany jest on do sumy.
// Na końcu obliczana jest średnia (jako suma/n) i wyświetlana.

// Oczywiście, możliwe jest także wykonanie tego zadania bez użycia kontenera vector. Zamiast tego, możemy użyć tradycyjnej tablicy. Poniżej znajduje się kod programu:

#include <iostream>

int main() {
    int n;
    std::cout << "Podaj liczbe elementow tablicy: ";
    std::cin >> n;

    double* tablica = new double[n];
    
    for(int i = 0; i < n; i++) {
        std::cout << "Podaj element " << (i + 1) << ": ";
        std::cin >> tablica[i];
    }
    
    double suma = 0.0;
    
    for(int i = 0; i < n; i++) {
        suma += tablica[i];
    }

    double srednia = suma / n;
    
    std::cout << "Srednia elementow tablicy to: " << srednia << "\n";
    
    delete[] tablica;
    
    return 0;
}
// W tym programie, tablica jest tworzona dynamicznie za pomocą operatora new. Dzięki temu, jej 
// rozmiar może być określony przez użytkownika podczas wykonywania programu. Po zakończeniu pracy z tablicą, pamięć jest zwalniana 
// za pomocą operatora delete[].

// Pamiętaj jednak, że w praktyce zaleca się stosowanie kontenerów STL, takich jak vector, ponieważ są one bezpieczniejsze 
// i łatwiejsze w użyciu. Kontenery te automatycznie zarządzają pamięcią, co zmniejsza ryzyko wystąpienia błędów, takich jak wycieki pamięci.