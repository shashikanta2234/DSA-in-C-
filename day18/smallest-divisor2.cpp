#include<bits/stdc++.h>
using namespace std;

int sum_of_quotients(int a[],int n,int div){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += ceil((double)(a[i])/(double)(div));
    }
    return sum;  
}

int smallest_divisor(int a[],int n,int h){
    int ans=INT_MAX;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0; i < n; i++){
        maxi=max(maxi,a[i]);
        mini=min(mini,a[i]);
        }
    while(mini<=maxi){
        int mid=(mini+maxi)/2;
        if(sum_of_quotients(a,n,mid)<=h){
            ans=min(ans,mid);
            maxi=mid-1;
        }else{
            mini=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[]={12,45,67,39};
    int n=sizeof(arr)/sizeof(arr[0]);
    int limit=8;
    int smallest_div=smallest_divisor(arr,n,limit);
    cout<<"The Smallest Divisor of the Array is : "<<smallest_div<<endl;
    return 0;
}