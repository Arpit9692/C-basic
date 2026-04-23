#include <iostream>

using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* p =arr;
    cout << *(p+2) << endl;
    cout << *++p << endl;
    cout << *p++ << endl;
    cout << *++p << endl;
    cout << *--p << endl;

    int* start = &arr[1];
    int* end = &arr[4];
    int diff = end - start;

    cout<< start << endl;
    cout<< end << endl;
    cout<<diff << endl;

}