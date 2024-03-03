#include<iostream>
using namespace std;

//creating class student
class student
{
public:
    int roll;
    string name;
    int age;
    //Creating construtor of student class
    student(int r, string n, int a){
        roll=r;
        name=n;
        age=a;
    };
};

int main(){
//creating objects
student s1(74,"Shashikanta",20);
student s2(68,"Sapna",20);
//print values
cout<<"Details of Student 1:\n"<<s1.name<<" "<<s1.roll<<" "<<s1.age<<endl;
cout<<"Details of Student 2:\n"<<s2.name<<" "<<s2.roll<<" "<<s2.age<<endl;

return 0;

}