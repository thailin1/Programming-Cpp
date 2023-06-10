#include <iostream>
#include <cmath>
using namespace std;

double funkcja(double x) {
    // Zdefiniuj tutaj swoją funkcję
    return x * x; // Przykładowa funkcja kwadratowa x^2
}

double obliczCalke(double a, double b) {
    // Zastosuj metodę prostokątów (suma Riemanna) do obliczenia przybliżonej wartości całki
    double dx = 0.0001; // Krok przybliżenia
    double suma = 0.0;

    for (double x = a; x < b; x += dx) {
        suma += funkcja(x) * dx;
    }

    return suma;
}

double obliczPochodna(double x) {
    // Zastosuj definicję pochodnej do obliczenia przybliżonej wartości pochodnej w punkcie x
    double h = 0.0001; // Przybliżenie różniczki
    double pochodna = (funkcja(x + h) - funkcja(x)) / h;

    return pochodna;
}

int main() {
    double liczba1, liczba2;
    char operacja;

    cout << "Kalkulator - Prosty program do wykonywania operacji arytmetycznych, obliczania pierwiastków, całek i pochodnych" << endl;
    cout << "-----------------------------------------------------------------------------------------------" << endl;

    // Wczytaj pierwszą liczbę
    cout << "Podaj pierwszą liczbę: ";
    if (!(cin >> liczba1)) {
        cerr << "Nieprawidłowy format liczby!" << endl;
        return 1;
    }

    // Wczytaj operator
    cout << "Podaj operator (+, -, *, /, r - pierwiastek kwadratowy, c - całka, d - pochodna): ";
    cin >> operacja;

    if (operacja != 'r' && operacja != 'c' && operacja != 'd') {
        // Wczytaj drugą liczbę
        cout << "Podaj drugą liczbę: ";
        if (!(cin >> liczba2)) {
            cerr << "Nieprawidłowy format liczby!" << endl;
            return 1;
        }
    }

    // Wykonaj odpowiednią operację i wypisz wynik
    switch (operacja) {
        case '+':
            cout << "Wynik: " << liczba1 + liczba2 << endl;
            break;
        case '-':
            cout << "Wynik: " << liczba1 - liczba2 << endl;
            break;
        case '*':
            cout << "Wynik: " << liczba1 * liczba2 << endl;
            break;
        case '/':
            if (liczba2 != 0) {
                cout << "Wynik: " << liczba1 / liczba2 << endl;
            } else {
                cerr << "Nie można dzielić przez zero!" << endl;
                return 1;
            }
            break;
        case 'r':
            if (liczba1 >= 0) {
                cout << "Pierwiastek kwadratowy z " << liczba1 << " = " << sqrt(liczba1) << endl;
            } else {
                cerr << "Nie można obliczyć pierwiastka z liczby ujemnej!" << endl;
                return 1;
            }
            break;
        case 'c':
            cout << "Całka z funkcji w przedziale [" << liczba1 << ", " << liczba2 << "] = " << obliczCalke(liczba1, liczba2) << endl;
            break;
        case 'd':
            cout << "Pochodna z funkcji w punkcie " << liczba1 << " = " << obliczPochodna(liczba1) << endl;
            break;
        default:
            cerr << "Nieznany operator!" << endl;
            return 1;
    }

    cout << "-----------------------------------------------------------------------------------------------" << endl;
    cout << "Dziękujemy za skorzystanie z kalkulatora. Do zobaczenia!" << endl;

    return 0;
}
