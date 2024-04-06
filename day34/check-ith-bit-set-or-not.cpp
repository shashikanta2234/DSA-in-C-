#include<bits/stdc++.h>
using namespace std;
void checkIthBit1(int n,int i){
    if(n&(1<<i)!=1){
        cout<<i<<"th bit is set in "<<n<<endl;
    }else{
        cout<<i<<"th bit is not set in "<<n<<endl;
    }
}
void checkIthBit2(int n,int i){
    if((n>>i)&1==1){
        cout<<i<<"th bit is set in "<<n<<endl;
    }else{
        cout<<i<<"th bit is not set in "<<n<<endl;
    }
}
int main(){
    int n=8;
    int i=2;
    checkIthBit1(n,i);
    checkIthBit2(n,i);
    return 0;
}