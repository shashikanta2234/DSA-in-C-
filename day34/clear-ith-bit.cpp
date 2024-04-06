#include<bits/stdc++.h>
using namespace std;

int clearIthBit(int n,int i){
    return n&~(1<<i);
}

int main(){
    int num=8;
    int i=3;
    cout<<"num: "<<num<<endl;
    cout<<"After clearing "<<i<<"th bit of number is : "<<clearIthBit(num,i)<<endl;
    return 0;
}