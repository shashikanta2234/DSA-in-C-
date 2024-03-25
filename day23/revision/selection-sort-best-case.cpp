#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[],int n){
    int countTC =0;
    for(int i=0;i<n-1;i++){
        int min=i;
        int swapped=0;
        for(int j=i+1;j<n;j++){
            countTC++;
            if(a[j]<a[min]){
                min=j;
                swapped=1;
            }
            if(a[j+1]<a[j]){
                swapped=1;
            }
        }
        if(swapped==0){
            cout<<"\nTC="<<countTC;
            return;
        }else{
            int temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }      
    }
    cout<<"\nTC="<<countTC;
}

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main() {
    //int arr[]={2,4,5,3,4,3,5,8,2,6,78,15,6,1,0};
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}; 
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before  sorting: ";
    printArray(arr,n);
    selection_sort(arr,n);
    cout<<"\nArray after sorting: ";
    printArray(arr,n);
    return 0;
}