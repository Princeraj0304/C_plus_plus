#include <iostream>
using namespace std;
class A
{
    public:
    int x;
    A()
    {
        x=40;
    }
A(int y)
{
    x=y;
}
void sum(A &obj3)
{
    x=x+obj3.x;
}
void dis()
{
    cout<<"Value of x : "<<x;
}

};
int main()
{A obj1,obj2(50);

obj1.sum(obj2);
obj1.dis();
}