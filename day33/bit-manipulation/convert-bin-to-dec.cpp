#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(string s){
    int n=s.length();
    int num=1;
    int res=0;
    for(int i=n-1; i>=0; i--){
        if(s[i]=='1'){
            res=res+num;
        }
        num=num*2;
    }
    return res;
}

int main(){
    string bin = "1000";
    cout << binaryToDecimal(bin);
    return 0;
}