#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int a[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            int temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
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
    insertion_sort(arr,n);
    printArray(arr,n);
    return 0;
}