#include<bits/stdc++.h>
using namespace std;

int SingleElement(int a[],int n){
    int i=1;
    while(i<n){
        if(a[i-1]!=a[i]){
            return a[i-1];
        }
        i+=3;
    }
    return a[n-1];
}

void insertionSort(int a[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
        }
    }
}

int main(){
    int arr[]={1,2,5,2,4,3,1,5,2,5,1,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    cout<<"Element that occurred once int the array is: "<<SingleElement(arr,n)<<endl;
}