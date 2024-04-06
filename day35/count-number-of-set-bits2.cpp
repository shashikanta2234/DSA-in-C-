#include<bits/stdc++.h>
using namespace std;
int countNumberOfSetBits(int n){
    int count=0;
    while(n>1){
        count+=n&1;
        n=n>>1;
        if(n==1){
            count+=1;
        }
    }
    return count;
}
int main(){
    int num=8;
    cout<<"The number is "<<num<<endl;
    cout<<"The number of set bits in "<<num<<" is: ";
    cout<<countNumberOfSetBits(num)<<endl;
    return 0;

}