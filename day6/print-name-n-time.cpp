#include<iostream>
using namespace std;
void printName(int n,string s){
    if(n==0) {return ;
    }else{
        cout<<s<<endl;
        printName(n-1,s);
    }
}

int main(){
    string str;
    int num;
    cout<<"Enter the string: ";
    cin>>str;
    cout<<"Number of times you want to print it: ";
    cin>>num;
    printName(num,str);
    return 0;
}