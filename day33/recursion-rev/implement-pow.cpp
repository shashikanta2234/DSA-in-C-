#include<bits/stdc++.h>
using namespace std;

double power(double x,int n){
    if(n==0){return 1;}
    else{
        return x*power(x,n-1);
    }
}
int main(){
    double x =-2;
    int n = 3;
    cout<<"("<<x<<")**"<<n<<"equals "<<power(x,n)<<endl;
    return 0;
}