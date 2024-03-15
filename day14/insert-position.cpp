#include<iostream>
using namespace std;

int insert_position(int a[],int low,int high,int num){
    while (low<=high)
    {
        int mid = (low +high)/2;
        if (num ==a[mid]){
            return mid;
        }else if (num < a[mid]){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    if(num<a[low] && low==high){
        return low-1;
    }else{
        return high+1;
    }
}

int main(){
    int arr[]={1,2,3,4,6,7,8,8,8,8,8,8,10,11,12,13,14,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the number you want to search: ";
    int num;
    cin>>num;
    int result = insert_position(arr,0,n-1,num);
    cout << result; 
}