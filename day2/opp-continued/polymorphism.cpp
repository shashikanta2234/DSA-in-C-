#include<iostream>
using namespace std;

class Student{
    public:
        void nature(){
            cout<<"He or she is a good student."<<endl;
        }
};
class niceStudent :public Student{
    public:
        void nature(){
            cout<<"He or she is a nice student."<<endl;
        }
};
class awesomeStudent :public Student{
    public:
        void nature(){
            cout<<"He or she is a Awesome student."<<endl;
        }
};
int main() {
    //creating objects of the derived class
    Student s2;
    niceStudent s1;
    awesomeStudent sa;
    
    //accessing the function using
    s1.nature();
    s2.nature();
    sa.nature();
    return 0;
}