#include <iostream>
using namespace std;

int main() {
    int liczby[99];
    int podzielne_przez_5[99];
    int ile_podzielnych = 0;
    for (int i = 0; i < 99; i++) {
        cout << "Podaj liczbe nr " << i+1 << " z 100: ";
        cin >> liczby[i];
        if (liczby[i] % 5 == 0) {
            podzielne_przez_5[ile_podzielnych] = liczby[i];
            ile_podzielnych++;
        }
    }
    cout << "Liczby podzielne przez 5: ";
    for (int i = 0; i < ile_podzielnych; i++) {
        cout << podzielne_przez_5[i] << " ";
    }
    cout << endl;
    cout << "liczb podzielnych przez 5 jest " << ile_podzielnych <<endl; 
    cout << endl;
    return 0;
}
//
// Wyjaśnienie:

// Tworzona jest tablica liczby o rozmiarze 99.
// Tworzona jest tablica podzielne_przez_5 o rozmiarze 99.
// Zmienna ile_podzielnych inicjalizowana jest wartością 0.
// W pętli for użytkownik wprowadza kolejno 99 liczb i zapisuje je w tablicy liczby. Jeśli liczba jest podzielna przez 5 (dzielenie modulo 5), dodajemy ją do tablicy podzielne_przez_5 i zwiększamy wartość ile_podzielnych.
// Wyświetlamy wynik w postaci liczb podzielnych przez 5 z tablicy podzielne_przez_5.