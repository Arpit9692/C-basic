#include <iostream>
using namespace std;

void f(int x){
    if (x >= 0)
    {
        cout << x;
        f(x-1);
        if (x > 0)
        cout << x;
    }
    
}

int main(){
    f(5);
    cout << endl;
    f(9);
    return 0;
}