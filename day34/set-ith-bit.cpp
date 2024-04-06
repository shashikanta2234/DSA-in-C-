#include<bits/stdc++.h>
using namespace std;

int setIthBit(int n,int i){
    return n|(1 << i);
}
int main(){
    int n=8;
    int i=2;
    cout<<"The number before setting the "<<i<<"bit is : "<<n<<endl;
    n=setIthBit(n,i);
    cout<<"\nThe number after setting the "<<i<<" bit is : "<<n<<endl;
    return 0;
}