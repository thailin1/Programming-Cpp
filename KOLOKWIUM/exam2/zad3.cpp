#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Podaj liczbe n: ";
    cin >> n;

    for (int i = n; i <= 7 * n; i += 5) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
