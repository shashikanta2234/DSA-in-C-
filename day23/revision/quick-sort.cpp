#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int low,int high){
    int pivot=a[low];
    int i=low,j=high;
    while(i<j){
        while(a[i]<=pivot && i<=high-1){
            i++;
        }
        while(a[j]>=pivot && j>=low+1){
            j--;
        }
        if(i<j){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    int temp=a[low];
    a[low]=a[j];
    a[j]=temp;
    return j;
}
void quick_sort(int a[],int low,int high){
    if(low>=high){
        return;
    }else{
        int pIndex=partition(a,low,high);
        quick_sort(a,low,pIndex-1);
        quick_sort(a,pIndex+1,high);
    }
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
    quick_sort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}