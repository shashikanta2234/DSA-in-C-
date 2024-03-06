#include<iostream>
using namespace std;
int main(){
    int n,digit;
    cout<<"Enter the number to be checked: ";
    cin>>n;
    int num=n;
    int reversed=0;
    while (n!=0){
        digit=n%10;
        reversed=reversed*10+digit;
        n=n/10;
    }
    if(reversed==num){
        cout<<"Number is palindrome: "<<num<<endl;
    }else{
        cout<<"Number is not palindrome: "<<num<<endl;
    }
}