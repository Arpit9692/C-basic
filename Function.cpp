#include <iostream>
using namespace std;

void fun(){
    cout << "Arpit Khatua!" << endl;
}

int add(int a,int b){
    return a+b;
}
int main(){
    fun();
    int sum = add(5,7);
    cout << sum ;
    return sum;
}

