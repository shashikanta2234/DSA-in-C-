#include<iostream>
using namespace std;

int main(){

    try{
        int marks;
        cout << "Enter your Marks: ";
        cin>>marks;
        if(marks>=33){
            cout<<"You are pass."<<endl;
        }else{
            throw(marks);
        }
    }catch(int m){
        cout<<"You are fail."<<endl;
        cout<<"Your Marks is : "<<m<<endl;
    }
    return 0;
}