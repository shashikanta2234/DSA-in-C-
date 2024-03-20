#include<bits/stdc++.h>
using namespace std;
int no_bouquet(int a[],int n,int k,int day){
    int count=0;
    int no_bqt=0;
    for(int i=0;i<n;i++){
        if(a[i]<=day){
            count++;
        }else{
            count=0;
        }
        if(count==k){
            no_bqt++;
            count=0;
        }
    }
    return no_bqt;
}

int min_days(int a[],int n,int k,int m){
    int days=INT_MAX;
    if(n<m*k){
        return -1;
    }else{
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,a[i]);
            mini=min(mini,a[i]);
        }
        for(int j=mini;j<=maxi;j++){
            if(no_bouquet(a,n,k,j)>=m){
                days=min(days,j);
            }
        }
        return days;
    }
}

int main(){
    int arr[] = {7, 7, 7, 7, 13, 11, 12, 7};
    int  n =8;
    int  k = 3,m=2;
    int min_day=min_days(arr,n,k,m);
    if(min_day==-1){
        cout<<"Not possible";
    }else{
        cout<<"Minimum number of days required: "<<min_day;
    }
    return 0;
}