#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    if(n%2==0)
    // Goto statement will jump to the conditional Statement.
      {goto aa;
      }
        else 
        goto bb;

        aa:
        cout<<"even"<<endl;
        return 0;
        bb:
        cout<<"Odd"<<endl;   
  return 0;
                      

}