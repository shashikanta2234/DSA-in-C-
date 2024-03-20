#include<bits/stdc++.h>
using namespace std;

int calculate_nth_power(int x, int y){
    int val=1;
    for(int i=0; i<y; i++){
        val*=x;
    }
    return val;
}

int nth_root(int num,int n){
    int l=0,h=num;
    while(l<=h){
        int mid=(l+h)/2;
        if(calculate_nth_power(mid,n)==num){
            return mid;
        }else if(calculate_nth_power(mid,n)>num){
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    return -1;
}

int main() {
    // Write C++ code here
    int num=27;
    int n=3;
    int ans=nth_root(num,n);
    cout<<n<<"th root of "<<num<<" is "<<ans<<endl;
    return 0;
}