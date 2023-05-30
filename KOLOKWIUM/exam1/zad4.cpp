#include <iostream>

using namespace std;

int main() {
    const int max_size = 100;
    int arr[max_size];
    int n = 0;
    int sum = 0;
    double avg;

    cout << "Podawaj liczby calkowite do momentu wprowadzenia zera:" << endl;

    while (n < max_size) {
        int x;

        cin >> x;
        cout << "Podaj liczbe:" << endl;
        if (x == 0) {
            break;
        }

        arr[n++] = x;
        sum += x;
    }

    avg = static_cast<double>(sum) / n;

    cout << "Srednia elementow tablicy wynosi: " << avg << endl;

    return 0;
}// napisz program o czyms tam
