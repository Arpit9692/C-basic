#include <iostream>

using namespace std;

int main() {
    // int i = 1;
    // while (i <= 10)
    // {
    //     cout << i << " ";
    //     i++;
    // }
    // return 0;

    int pin;
    cout << "Enter your pin: ";
    cin >> pin;
    while (pin != 9999)
    {
        cout << "Incorrect pin. Try again: "; 
        cin >> pin;
    }
    cout << "Pin accepted." << endl;
}