#include <iostream>
using namespace std;

class p{
public:
int a;
int b;
void sum(int x,int y)
{
    a=x;
    b=y;
    cout<<"sum "<<a+b;
}

};
class c : public p
{
public:
int c;
int d;
void sum(int m,int n)
{
    c=m;
    d=n;
    cout<<" The sum will be: "<<c+d;
}
};

int main()
{
c objc1;
objc1.sum(100,200);

}