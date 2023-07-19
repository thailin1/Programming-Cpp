// Instrukcje warunkowe w C++ są wykorzystywane do wykonania określonych bloków kodu, gdy spełniony jest określony warunek. Są one kluczowym 
//elementem kontroli przepływu programu. Główne typy instrukcji warunkowych w C++ to: if, if-else, if-else if-else oraz switch.

// Podstawowa struktura instrukcji if wygląda następująco:


if (warunek) {
    // kod do wykonania jeśli warunek jest prawdziwy
}
//Jeśli warunek w nawiasach jest prawdziwy (to jest, jeśli jest równy true), kod w klamrach jest wykonywany. W przeciwnym razie, program 
//pomija ten blok i kontynuuje.

//Przykładowy program, który ilustruje użycie instrukcji warunkowej if, może wyglądać tak:


#include<iostream>

int main() {
    int liczba;
    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;
    
    if (liczba > 0) {
        std::cout << "Podana liczba jest dodatnia.\n";
    }
    
    return 0;
}
// W tym programie, po wprowadzeniu liczby przez użytkownika, program sprawdza, czy liczba jest większa od zera. Jeżeli tak, wypisuje na ekranie komunikat, 
//że podana liczba jest dodatnia.

// W przypadku if-else dodajemy alternatywne działanie, które ma zostać wykonane, gdy warunek nie jest spełniony:

if (warunek) {
    // kod do wykonania jeśli warunek jest prawdziwy
}
else {
    // kod do wykonania jeśli warunek jest fałszywy
}
// Poniżej przykład z if-else:

#include<iostream>

int main() {
    int liczba;
    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;
    
    if (liczba > 0) {
        std::cout << "Podana liczba jest dodatnia.\n";
    }
    else {
        std::cout << "Podana liczba nie jest dodatnia.\n";
    }
    
    return 0;
}
// Tutaj, jeżeli liczba nie jest większa od zera, program wypisze, że liczba nie jest dodatnia.