#include<iostream>
#include<cmath>
using namespace std;
int sq_root(int n){
    if(n<1){return 0;}
    int low=1,high=n;
    while(low<=high){
        int mid = (low+high)/2;
        if(mid*mid<=n){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return high;
}

int main(){
    cout<<"Enter a number: ";
    int num;
    cin>>num;
    cout<<"Square root of "<<num<<" is : "<<sq_root(num)<<endl;
    return 0;
}