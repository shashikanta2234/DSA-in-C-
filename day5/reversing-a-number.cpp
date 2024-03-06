#include<iostream>
using namespace std;
int main(){
    int n,digit;
    cout<<"Enter the number to be reversed: ";
    cin>>n;
    int num=n;
    int reversed=0;
    while (n!=0){
        digit=n%10;
        reversed=reversed*10+digit;
        n=n/10;
    }
    
    cout<<reversed<<endl;
}