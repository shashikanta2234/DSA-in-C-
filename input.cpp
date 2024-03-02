#include<iostream>
using namespace std;
#include<string>

int main(){
    string name;
    cout<<"Enter Your name:";
    cin>>name;
    int len=name.length();
    cout<<"Length of name:"<<len<<endl;
    cout<<name;
    return 0;
}