#include<bits/stdc++.h>
using namespace std;

int kth_missing(int a[],int n,int k){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]-(mid+1)>=k){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return low+k;
}

int main(){
    int a[]={1,3,6,7,9,10,12,14,15};
    int n = sizeof(a) / sizeof(a[0]);
    int k=5;
    int kth_missing_number = kth_missing(a,n,k);
    cout<<"The " << k << "th missing number is: " << kth_missing_number << endl; 
    return 0;
}