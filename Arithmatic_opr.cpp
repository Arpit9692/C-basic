#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=a++ + ++a*2;
    cout<<b<<endl;
    int x=1;
    int y=x++ + x++ + --x;
    cout<<y;
    return 0;
    int z=++x + x++ + --x;
    cout<<z;
    return 0;
}