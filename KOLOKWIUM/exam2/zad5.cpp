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
