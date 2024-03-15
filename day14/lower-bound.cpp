#include<iostream>
using namespace std;

int lower_bound(int a[],int low,int high,int num){
    while (low<=high)
    {
        int mid = (low +high)/2;
        if (num ==a[mid]){
            while(num==a[mid-1]){
                mid--;
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
    int arr[]={1,2,3,4,6,7,8,8,8,8,9,10,11,12,13,14,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the number you want to search: ";
    int num;
    cin>>num;
    int result = lower_bound(arr,0,n-1,num);
    if(result == -1){
        cout << "Lower bound of the array is not found.";
    }else {
        cout << "Lower bound of the array is " << result; 
}
}