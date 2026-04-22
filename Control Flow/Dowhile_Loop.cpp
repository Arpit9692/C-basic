#include <iostream>

using namespace std;

int main() {
    // int i=1;
    // do
    // {
    //    cout << i << " ";
    //    i++;
    // } while (i <= 5);
    
    int password, correctpassword = 336;
    do
    {
        cout << "Enter 3digit Password: ";
        cin >> password;
    } while (password != correctpassword);
    
}