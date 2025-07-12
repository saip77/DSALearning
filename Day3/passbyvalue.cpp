#include <iostream>
using namespace std;

//Pass by value
void passbyValue(int a)
{
    a = a+10;
}

int main()
{
    int x=11;
    cout<<x<<endl;
    passbyValue(x);
    cout<<x<<endl;
    return 0;
}