#include<iostream>
using namespace std;

int binary_search(int a[],int low,int high,int num){
    if(low==high && a[low]!=num){
        return -1;
    }
    int mid = (low + high)/2;
    if(a[mid]==num){
        return mid;
    }else{
        if (a[mid]>num){
            binary_search(a,low,mid-1,num);
        }else{
            binary_search(a,mid+1,high,num);
        }
    }
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