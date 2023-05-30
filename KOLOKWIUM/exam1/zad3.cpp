#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;

    cout << "Podaj liczbe n: ";
    cin >> n;

    for (int i = 0; i < n; i += 2) {
        sum += i;
    }

    cout << "Suma liczb parzystych mniejszych od " << n << " wynosi " << sum << endl;

    return 0;
}
