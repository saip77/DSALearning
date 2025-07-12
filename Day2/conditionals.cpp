#include <iostream>
using namespace std;

int main()
{
    //Understanding I/P O/P with if-else
    int marks;
    cout<<"Enter your marks"<<endl;
    cin>>marks;
    if(marks>90 && marks<=100)
    {
        cout<<"You got an A"<<endl;
    }
    else if(marks>80 && marks<=90)
    {
        cout<<"You got a B"<<endl;
    }
    else if(marks>70 && marks<=80)
    {
        cout<<"You got a C"<<endl;
    }
    else
    {
        cout<<"Try again"<<endl;
    }
    return 0;
}