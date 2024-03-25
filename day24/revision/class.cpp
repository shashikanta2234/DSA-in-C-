#include<bits/stdc++.h>
using namespace std;

class student
{
private:
    /* data */
public:
    int rollno, marks;
    string name;
    
    void getdata() {
        cout << "Enter Roll No : ";
        cin >> rollno;
        cout << "Enter Name : ";
        cin.ignore();
        getline(cin,name);
        cout << "Enter Marks : ";  
        cin >> marks; 
    }
    void putdata() {
        cout << "\nRoll No : "<<rollno;
        cout << "\nName : "<<name;
        cout << "\nMarks : "<<marks;
    }
};

int main(){
    student std1;
    std1.getdata();
    std1.putdata();
    return 0;
}

