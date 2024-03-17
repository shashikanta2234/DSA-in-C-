#include<iostream>
using namespace std;

int first_occur(int a[],int low,int high,int num){
    while (low<=high)
    {
        int mid = (low +high)/2;
        if (num ==a[mid]){
            while(num==a[mid-1]){
                mid--;
            if(mid==0) {return 0;
            }
            }
            return mid;
        }else if (num < a[mid]){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;
}
int last_occur(int a[],int low,int high,int num){
    while (low<=high)
    {
        int mid = (low +high)/2;
        if (num ==a[mid]){
            while(num==a[mid+1]){
                mid++;
            }
            return mid;
        }else if (num < a[mid]){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;
}
int count_occur(int a[],int n,int x){
    int f = first_occur(a,0,n-1,x);
    int l = last_occur(a,0,n-1,x);
    if(f==-1 && l==-1){
        return  0;
    }else{
        return ((l-f)+1);
    }
}
int main(){
    int arr[]={1,1,2,3,3,3,4,5,5,5,6,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the number you want to check:";
    int x;
    cin>>x;
    int count=count_occur(arr,n,x);
    if (count==0){
        cout<<"Element is not present in array.";
    }else{
        cout<<"Element "<<x<<" occurs "<<count <<" times."<<endl;
    }
    return 0;
}