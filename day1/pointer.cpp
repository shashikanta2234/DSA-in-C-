#include<iostream>
using namespace std;
int main(){
    string str="Shashikanta is learning c++ programming";
    string* ptr=&str;
    cout<<"The original String : "<<*ptr<<"\n"<<"Address of string : "<<ptr<<endl;
}