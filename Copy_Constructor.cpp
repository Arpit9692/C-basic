#include <iostream>

using namespace std;

//defult copying
// class Student{
//     public:
//     int roll;
//     string name;
// };
// int main(){
//     Student s1;
//     s1.roll = 101;
//     s1.name="Arpit";
//     Student s2 = s1; //student s2(s1);
//     cout<<s2.roll<<endl<<s2.name;
// }

class Student {
    public:
    int roll;
    string name;

Student (int r,string n){
    roll=r;
    name=n;
}
Student(const Student &s){
    roll = s.roll;
    name="";
}
};
int main(){
    Student s1(336,"Arpit");
    Student s2 = s1;
    cout<<s2.roll<<s2.name;
}
