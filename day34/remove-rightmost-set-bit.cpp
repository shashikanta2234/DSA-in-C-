#include<bits/stdc++.h>
using namespace std;

int RemoveIthBit(int n){
    return n&(n-1);
}

int main(){
    int num=13;
    cout<<"num: "<<num<<endl;
    cout<<"After removing rightmost set bit of number is : "<<RemoveIthBit(num)<<endl;
    return 0;
}