#include<iostream>
using namespace std;

class  Student
{
private:
    string name;
    int roll;
public:
     void setData(string n, int r){
        name = n;
        roll=r;
     }
     void getData() {
         cout << "Name :"<<name<<endl;
         cout<<"Roll :"<<roll<<endl;
     }
};

int main(){
    //creating object of class student
    Student s1,s2;
    //calling the function to set
    s1.setData("Shashikanta",74);
    s2.setData("Sapna",68);
    //calling the function to retrieve data
    cout << "\nStudent Details after setting Data:"<< endl;
    s1.getData();
    cout <<"\n";
    s2.getData();
   return 0;
   }