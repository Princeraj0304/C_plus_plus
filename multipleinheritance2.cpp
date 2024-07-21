#include <iostream>
using namespace std;
class A
{
    public:
    int a;
    A()
    {
        a=100;
        cout<<"class a called"<<endl;
    }
};
class B  :public A
{
public: 
int a;
B()
    {
        a=200;
        cout<<"class b called"<<endl;
    }

};
class C  : public A,public B
{
public: 
int a;
C()
    {
        a=300;
        cout<<"class b called"<<endl;
    }
};

class D : public B,public C
{
public :
int a;
D(){
    a=400;
}

};
int main()
{
C objc1;

cout<<objc1.a<<endl;
cout<<objc1.A::a<<endl;

}