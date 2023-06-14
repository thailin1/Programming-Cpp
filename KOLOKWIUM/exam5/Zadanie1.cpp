#include <iostream>
using namespace std;

int main() {
    double liczba1, liczba2;
    cout << "Podaj pierwszą liczbe: ";
    cin >> liczba1;
    cout << "Podaj drugą liczbe: ";
    cin >> liczba2;

    double srednia = (liczba1 + liczba2) / 2;

    cout << "Srednia: " << srednia << endl;

    return 0;
}
