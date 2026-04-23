#include <iostream>

using namespace std;

int main(){
    int a=10;
    int *p = &a;
    int c = *p;
    int* d = & *p;
    int** e = &p;
    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;

    int x= 15;
    int* r =&x;
    *r =*r + 1;
    cout << x;
}
