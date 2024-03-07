#include<iostream>
using namespace std;

int main(){
        int n1,n2,gcd=1;
        cout<<"n1: ";
        cin>>n1;
        cout<<"n2: ";
        cin>>n2;

        if(n1<=n2){
            for(int i=2;i<=n1;i++){
            if(n1%i==0 && n2%i==0){
                gcd = i;
                }
            }
        }else{
        for(int i=2;i<=n2;i++){
            if(n1%i==0 && n2%i==0){
                gcd = i;
                }
            }
        }

    cout<<"GCD of "<<n1<<" and "<<n2<<" is: "<<gcd<<endl;
}