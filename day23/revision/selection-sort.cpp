#include<bits/stdc++.h>
using namespace std;
void selection_sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        int temp=a[min];
        a[min]=a[i];
        a[i]=temp;
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
    cout<<"Array before  sorting: ";
    printArray(arr,n);
    cout<<"\nArray after sorting: ";
    selection_sort(arr,n);
    printArray(arr,n);
    return 0;
}