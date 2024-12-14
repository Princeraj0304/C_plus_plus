#include <iostream>
using namespace std;

int add(int a,int b){
    int sum= a+b;
}

int main()
{
    int a,b;
    cout<<"Enter the first number ";
    cin>>a;

    cout<<"Enter the second number ";
    cin>>b;

    cout<<add(a,b);

    return 0;
}