#include<bits/stdc++.h>
using namespace std;

int toggleIthBit(int n,int i){
    return n^(1<<i);
}

int main(){
    int num=13;
    int i=2;
    cout<<"num: "<<num<<endl;
    cout<<"After toggling "<<i<<"th bit of number is : "<<toggleIthBit(num,i)<<endl;
    return 0;
}