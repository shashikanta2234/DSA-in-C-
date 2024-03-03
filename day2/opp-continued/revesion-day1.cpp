#include<iostream>
using namespace std;

int area(int l, int b){
    return l*b;
}

//Creating class
class student{
    public:
    string name;
    int rollno;
    int phone;
    void printDetails(){//class method
        cout<<"Name : "<<name<<endl;
        cout<<"Rollno : "<<rollno<<endl;
        cout<<"Phone No. : "<<phone<<endl;
    }
};

int main() {
    int i=0;
    cout <<i<<"\n";
    //calling the function
    int area1=area(2,5);
    cout <<"Area of rectangle is : "<<area1<<endl;
    int arr[]={1,3,4,5,6,7,8,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    //For loop
    for(int i=0;i<len;i++){
        cout <<arr[i]<<" ";
    }
    i=0;
    //While loop
    while (i<len)
    {
        cout <<arr[i]<<" ";
        i++;
    }

    int j=0;

    //do-while loop
    do{
        cout <<arr[i]<<" ";
        i++;
    }while (i<len);
    
    //object from class
    student s1;
    s1.name="Sapna";
    s1.rollno=68;
    s1.phone=9876543;
    cout <<s1.name<<" "<<s1.rollno<<" "<<s1.phone<<endl;
    //Calling the class method
    s1.printDetails();
    return 0;
}