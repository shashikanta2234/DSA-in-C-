#include<iostream>
using namespace std;

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

int main(){
    int arr[]={1,1,2,3,3,3,4,5,5,5,6,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the number you want to check:";
    int x;
    cin>>x;
    int last=last_occur(arr,0,n-1,x);
    if (last==-1){
        cout<<"Element is not present in array.";
    }else{
        cout<<"Last occurrence of element "<<x<<" is index:"<<last<<endl;
    }
    return 0;
}