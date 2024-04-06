#include<bits/stdc++.h>
using namespace std;

void checkPowerOfTwo(int n){
    if(n&(n-1)!=0){
        cout<<"No, the given number is not power of two."<<endl;
    }else{
        cout<<"Yes, the given number is power of two."<<endl;
    }
}

int main(){
    int num=10;
    int num2=5;
    checkPowerOfTwo(num);
    checkPowerOfTwo(num2);
}