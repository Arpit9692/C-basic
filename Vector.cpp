#include <iostream>
#include <vector>

using namespace std;

void main(){
    vector <int> v = {10,20};
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(30);
    cout << v.size()<<endl;
    cout << v.capacity()<<endl;
    v.push_back(40);
    cout << v.size() << endl;
    cout << v.capacity()<<endl;
    v.push_back(50);
    cout << v.size()<<endl;
    cout << v.capacity()<<endl;
    v.pop_back();
    cout << v.size()<<endl;
    cout << v.capacity()<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<v.empty()<<endl;
    cout<<v.clear()<<endl;
    cout<<v.empty()<<endl;

}