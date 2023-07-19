//Poniżej znajduje się kod programu, który wczytuje liczby całkowite do tablicy n-elementowej i oblicza średnią liczb podzielnych przez 2:

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Podaj liczbe elementow tablicy: ";
    std::cin >> n;

    std::vector<int> tablica(n);
    
    for(int i = 0; i < n; i++) {
        std::cout << "Podaj element " << (i + 1) << ": ";
        std::cin >> tablica[i];
    }
    
    int suma = 0;
    int licznik = 0;
    
    for(int i = 0; i < n; i++) {
        if(tablica[i] % 2 == 0) {
            suma += tablica[i];
            licznik++;
        }
    }

    if(licznik > 0) {
        double srednia = static_cast<double>(suma) / licznik;
        std::cout << "Srednia elementow tablicy podzielnych przez 2 to: " << srednia << "\n";
    } else {
        std::cout << "W tablicy nie ma elementow podzielnych przez 2.\n";
    }
    
    return 0;
}
// W tym programie:

// Użytkownik jest proszony o podanie liczby n, która określa liczbę elementów tablicy. Tablica jest tworzona jako vector o rozmiarze n.
// Kolejno wczytywane są liczby całkowite od użytkownika, które są dodawane do tablicy.
// Następnie dla każdego elementu tablicy sprawdzane jest, czy jest on podzielny przez 2. Jeżeli tak, jest dodawany do sumy i 
// zwiększany jest licznik tych liczb.
// Na końcu, jeżeli licznik jest większy od zera, obliczana jest średnia (jako suma/licznik) i wyświetlana. Jeżeli licznik jest 
// równy zero, oznacza to, że w tablicy nie było liczb podzielnych przez 2 i wyświetlany jest stosowny komunikat.