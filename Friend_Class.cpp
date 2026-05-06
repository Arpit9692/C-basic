#include <iostream>
using namespace std;
class A{
    int a=5;
    protected: int b=10;
    friend class B;
    show();
};
class B{
    public:
    void show(A obj){
        cout << obj.a << endl;
        cout << obj.b << endl;
    }
};

int main(){
    A obj;
    B bobj;
    bobj.show(obj);
}