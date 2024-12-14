#include <iostream>
using namespace std;

char name(char b) {
    return b;
}

int main() {
    char a;
    cout<<"Enter your character ";
    cin >> a; 
    cout << name(a);
    return 0;
}
