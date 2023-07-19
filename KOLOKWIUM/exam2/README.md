# Kolokwium 2

### [Zadanie 1.](https://github.com/dawidolko/Programming-Cpp/blob/main/KOLOKWIUM/exam2/zad1.cpp)
Napisać program który oblicza pole prostokąta o podanych przez użytkownika długościach boków a i b.

### [Zadanie 2.](https://github.com/dawidolko/Programming-Cpp/blob/main/KOLOKWIUM/exam2/zad2.cpp)
Napisać program, który wyznaczy większą z podanych przez użytkownika liczb wymiernych.

### [Zadanie 3.](https://github.com/dawidolko/Programming-Cpp/blob/main/KOLOKWIUM/exam2/zad3.cpp)
Napisać program, który po wprowadzeniu liczby n wypisze kolejno wielokrotności liczby 5 z przedziłu [n, 7n]

### [Zadanie 4.](https://github.com/dawidolko/Programming-Cpp/blob/main/KOLOKWIUM/exam2/zad4.cpp)
Napisać program który pozwoli na wprowadzenie 5 liczb oraz wypisze sumę wprowadzonych liczb ujemnych i ich ilość.

### [Zadanie 5.](https://github.com/dawidolko/Programming-Cpp/blob/main/KOLOKWIUM/exam2/zad5.cpp)
Napisać (narysować) schemat algorytmu zapisanego programem:

```
#include <iostream>
using namespace std;
int main()
{
  int x,z; int n=0, int y=1;
  cin>>z;
  do
  {
    cin>>x;
    y=x*y;
    ++n;
  }
  while(y<z);
  cout<<"y wynosi ";
  cout<<y<<endl;
  cout<<"n wynosi "<<n;
  return 0;
}
```
