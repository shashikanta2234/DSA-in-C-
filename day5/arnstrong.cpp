#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,e=0,num,temp,sum=0;
    cout<<"Number to be checked: ";
    cin>>n;
    num=n;
    temp=n;
    while (n!=0)
    {
        e++;
        n=n/10;
    }
    while(temp!=0){
        int base=temp%10;
        sum=sum+ pow(base,e);
        temp=temp/10;
    }
    if(sum==num){
        cout<<"Number is Armstrong."<<endl;
    }else{
        cout<<"Number is not Armstrong."<<endl;
    }
    
}