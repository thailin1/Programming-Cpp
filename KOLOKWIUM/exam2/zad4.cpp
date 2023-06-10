#include <iostream>
using namespace std;

int main() {
    int liczba, suma_ujemnych = 0, ilosc_ujemnych = 0;

    cout << "Podaj 5 liczb calkowitych:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "liczba nr" <<i+1 << endl;
        cin >> liczba;
        if (liczba < 0) {
            suma_ujemnych += liczba;
            ilosc_ujemnych++;
        }
    }

    cout << "Suma wprowadzonych liczb ujemnych: " << suma_ujemnych << endl;
    cout << "Ilosc wprowadzonych liczb ujemnych: " << ilosc_ujemnych << endl;

    return 0;
}
