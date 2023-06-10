# Kolokwium 1

### **Zadanie. 1.**
Napisać program który oblicza pole prostokąta o podanych przez użytkownika długościach boków a i b.

### **Zadanie. 2.**
Napisać program, który wyznaczy większą z podanych przez użytkownika liczb wymiernych.

### **Zadanie. 3.**
Napisać program, który po wprowadzeniu liczby n wypisze kolejno wielokrotności liczby 5 z przedziłu [n, 7n]

### **Zadanie. 4.**
Napisać program który pozwoli na wprowadzenie 5 liczb oraz wypisze sumę wprowadzonych liczb ujemnych i ich ilość.

### **Zadanie. 5.**
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
