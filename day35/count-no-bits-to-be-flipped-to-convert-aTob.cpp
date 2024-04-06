#include<bits/stdc++.h>
using namespace std;

int numberOfBitsToBeFlipped(int a,int b){
    int temp=a^b;
    int count = 0;
    while(temp>1){
        count+=temp&1;
        temp=temp>>1;
        if(temp==1){
            count+=1;
        }
    }
    return count;
}
int main(){
    int a=10;
    int b=12;
    cout<<"No. of bits to be flipped is: "<<numberOfBitsToBeFlipped(a,b)<<endl;
    return 0;
}