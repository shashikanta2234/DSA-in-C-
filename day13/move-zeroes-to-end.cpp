#include<iostream>
using namespace std;

void moveZeroes(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j+1]!=0 and arr[j]==0){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int ar[]={1,5,0,5,0,8,1,0,9,4,0,1,0,5,9};
    int n=sizeof(ar)/sizeof(ar[0]);
    
    cout<<"Original array: ";{
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    moveZeroes(ar,n);
    cout << "Array after moving zeroes to the end : ";
    for (int i = 0; i < n; i++){
        cout << ar[i] << " ";
    }
    return 0;
}