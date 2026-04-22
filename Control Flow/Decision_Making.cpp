#include <iostream>
using namespace std;
int main(){
int num = -11;
if (num > 0){
cout << "Positive number" << endl;
}
//if-else statement
if(num % 2 == 0)
cout << "Even number" << endl;
else
cout << "Odd number" << endl;
//if-else-if statement
int marks = 95;
if (marks >= 90)
cout << "Grade A+" << endl;
else if (marks >=80)
cout << "Grade A" << endl;
else if (marks >= 60)
cout << "Grade B" << endl;
else
cout << "Grade C" << endl;

//nested if statement
int amount = 5000;
int balance = 10000;
int dailylimit = 2000;

if(amount <= balance)
  if (amount <= dailylimit)
    if (amount % 100 == 0)
       cout << "Withdrawal successful" << endl;
       else
         cout << "Amount must be a multiple of 100" << endl;
    else
        cout << "Exceeds daily limit" << endl;
else
    cout << "insufficient balance" << endl;
 
}