#include<iostream>
using namespace std;

int binary_search(int a[],int low,int high,int num){
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
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the number you want to search: ";
    int num;
    cin>>num;
    int result = binary_search(arr,0,n-1,num);
    if(result == -1){
        cout << "The element is not present in array.";
    }else {
        cout << "Element is present at index " << result; 
}
}