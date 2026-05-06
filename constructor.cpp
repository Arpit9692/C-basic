#include <iostream>

using namespace std;
class Student{
    int roll;
    public:

    Student (int r){
        roll = r;
        cout << roll << endl;
    }
};
int main(){
    cout << "Student RollNumber is: ";
    Student s1(101);
}
// Default Constructor

// class Student{
//     int roll;
//     public:
//     Student (){
//         roll = 10;
//         cout << roll << endl;
//     }
// };
// int main(){
//         Student s1,s2;
//     }

// Parameterized Constructor
// class Student{
//     int roll;
//     public:
//     Student(int r){
//         roll = r;
//         cout<<roll<<endl;
//     }
// };
// int main(){
//         Student s1(101),s2(333),s3(336);
//     }