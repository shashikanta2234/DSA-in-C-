#include<bits/stdc++.h>
using namespace std;

int max_rate(int a[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i] > max){max = a[i];}
    }
    return max;
}
int total_hours(int a[],int n,int rate){
    int sum=0;
    for(int i=0;i<n;i++) {
        sum+=ceil((double)(a[i])/(double)(rate));
    }
    return sum;

}

int min_rate_required(int a[],int n,int h){
    int low=0,high=max_rate(a,n),ans=high;
    while(low<=high) {
        int mid=(low+high)/2;
        int total_hrs=total_hours(a,n,mid);
        if(total_hrs<=h){
            ans=min(ans,mid);
            high=mid-1;
            
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    int arr[]={7, 15, 6, 3};
    int n=4,h=8;
    int min_rate=min_rate_required(arr,n,h) ;
    cout<<"Minimum Rate Required to Eat in "<<h<<" Hours is: "<<min_rate<<endl;
    return 0;

}