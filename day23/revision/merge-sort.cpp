#include<bits/stdc++.h>
using namespace std;

void merge(int a[] , int low , int mid , int high) {
    int left=low, right=mid+1;
    vector<int> temp;
    while (left<=mid && right<=high){
        if(a[left]<=a[right]){
            temp.push_back(a[left]);
            left++;
        }else{
            temp.push_back(a[right]);
            right++;
        }  
    }
    while(left<=mid){
        temp.push_back(a[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(a[right]);
        right++;
    }
    for(int i=0;i<temp.size();i++){
        a[low+i]=temp[i];
    }
}

void merge_sort(int a[],int low,int high){
    if(low>=high){
        return ;
    }
    int mid = (low + high)/2;
    merge_sort(a , low , mid);
    merge_sort(a , mid+1 , high);
    merge(a,low,mid,high);
}

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main() {
    int arr[]={9,5,8,1,6,2,0,4,1,8,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before  sorting:";
    printArray(arr,n);
    cout<<"\nArray after sorting :";
    merge_sort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}