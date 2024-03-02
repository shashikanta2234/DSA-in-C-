#include<iostream>
using namespace std;

//Declaration of function
void myFunc(string name){
    //code to be executed
    cout<<name<<"\n";
}
int main(){
    string str="Shashikanta";
    //calling the function
    myFunc(str);
    return 0;
}