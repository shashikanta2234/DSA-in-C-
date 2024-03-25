#include<bits/stdc++.h>
using namespace std;

struct student{
    int rollno, marks;
    string name;
};

int main(){
    student s1;
    s1.rollno=74;
    s1.name="Shashikanta Mahato";
    s1.marks=85;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Roll No.: "<<s1.rollno<<endl;
    cout<<"Marks: "<<s1.marks<<endl;

    return 0;
}