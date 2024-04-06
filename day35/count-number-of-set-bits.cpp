#include<bits/stdc++.h>
using namespace std;
int countNumberOfSetBits(int n){
    int count=0;
    while(n>1){
        if(n%2==1){
            count++;
        }
        n=n/2;
        if(n==1){
            count++;
        }
    }
    return count;
}
int main(){
    int num=7;
    cout<<"The number is "<<num<<endl;
    cout<<"The number of set bits in "<<num<<" is: ";
    cout<<countNumberOfSetBits(num)<<endl;
    return 0;

}