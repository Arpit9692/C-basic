#include <iostream>

using namespace std;

class Demo{
    private: int a;
    protected: int b;
    public: 
        int c;
        void set(){
            a=10;b=20;c=30;
        }
        void show(){
            cout << a << " " << b << " " << c << endl;
        }
};

class child: public Demo{
    public:
        void access(){
            // cout << a << endl; // error
            cout << b << endl;
            cout << c << endl;
        }
};
int main(){
    Demo d;
    d.set();
    d.show();
    // d.a=100;
    // d.b=200;
    // d.c=300;
    cout << d.c << endl;
}