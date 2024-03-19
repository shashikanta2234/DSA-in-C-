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
        while(mini<=maxi){
            int mid=(mini+maxi)/2;
            int bouquets=no_bouquet(a,n,k,mid);
            if(bouquets>=m){
                days=min(days,mid);
                maxi=mid-1;
            }else{
                mini=mid+1;
            }
        }
        return days;
    }
}

int main(){
    int arr[] = {1, 10, 3, 10, 2};
    int  n =5;
    int  k = 2,m=3;
    int min_day=min_days(arr,n,k,m);
    if(min_day==-1){
        cout<<"Not possible";
    }else{
        cout<<"Minimum number of days required: "<<min_day;
    }
    return 0;
}