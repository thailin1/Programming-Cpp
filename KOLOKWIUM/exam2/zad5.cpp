#include <iostream>
using namespace std;

int main()
{
    int x,z; int n=0;
    int y;
    y=1;
    cin>>z;
    do
    {
        cin>>x;
        y=x*y;
        ++n;
    }while(y<z);
    cout<<"y wynosi ";
    cout<<y<<endl;
    cout<<"n wynosi"<<n;
    return 0;
}


// START
// 1. Zadeklaruj zmienne typu całkowitego x, y, z, n i przypisz wartość 0 do n oraz wartość 1 do y
// 2. Wczytaj wartość z z klawiatury i zapisz ją do zmiennej z
// 3. Wykonaj pętlę do-while
// 4.     Wczytaj wartość x z klawiatury i zapisz ją do zmiennej x
// 5.     Pomnóż zmienną y przez x i zapisz wynik w zmiennej y
// 6.     Zwiększ wartość zmiennej n o 1
// 7. Powtarzaj kroki 4-6 dopóki zmienna y jest mniejsza niż zmienna z
// 8. Wypisz na ekranie wartość zmiennej y
// 9. Wypisz na ekranie wartość zmiennej n
// 10. Zakończ program
// KONIEC
