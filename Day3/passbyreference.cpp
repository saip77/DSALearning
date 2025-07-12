#include <iostream>
using namespace std;

//Pass by reference
void passbyReference(int &a)
{
    a = a+10;
}

int main()
{
    int x=11;
    cout<<x<<endl;
    passbyReference(x);
    cout<<x<<endl;
    return 0;
}