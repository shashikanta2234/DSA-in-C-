#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[],int n){

    for (int i = 0; i < n-1; i++){
        int swapped=0;
        for(int j=0;j<n-i; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapped=1;
            }
        }
        if(swapped==0){
            return;
        }
    }
    }

int main(){
    int arr[]={1,5,3,1,2,4,2,8,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Given array is: ";
    for (int i = 0; i <n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubble_sort(arr,n);
    cout<<"After sorting the array is: ";
    for (int i = 0; i <n; i++){
        cout<<arr[i]<<" ";
    }

}