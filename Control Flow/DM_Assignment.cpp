#include <iostream>
using namespace std;
int main (){
    int PCMmarks;
    int AccountMarks;
    string stream;
    cout << "Enter marks: ";
    cin >> PCMmarks;
    cout << "Enter Account marks: ";
    cin >> AccountMarks;
    cout << "Enter stream: ";
    cin >> stream;
    //Assignment 1
    if (stream == "Science")
        if ( PCMmarks > 90)
            cout << "Eligible for Engineering " << endl;
        else 
            cout << "Not eligible for Engineering " << endl;
    else 
        cout << "Choose a suitable cource " << endl;
// Assignment 2

if (stream == "Commerce")
    if (AccountMarks > 90)
        cout << "Eligible for B.com(Hons)" << endl;
    else
        cout << "Not eligible for B.com(Hons)" << endl;
else
    cout << "Choose a suitable Cource" << endl;
}



