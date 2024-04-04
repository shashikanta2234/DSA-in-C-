#include<bits/stdc++.h>
using namespace std;

string decimalToBinary(int n){
    string result="";
    while(n!=1){
        if (n%2==1) {
            result = "1" + result;
        }else{
            result="0" + result;
        }
        n=n/2;
    }
    return "1"+result;
}

int main(){
    int n=16;
    cout<<"Binary representation of "<<n<<" is: "<<decimalToBinary(n);
    return 0;
}