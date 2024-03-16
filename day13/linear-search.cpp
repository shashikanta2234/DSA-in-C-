#include<iostream>
using namespace std;

int search(int arr[],int n,int num){
    for(int i=0;i<n;i++){
        if(arr[i]==num){return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,5,3,16,2,28};
    int n=sizeof(arr)/sizeof(arr[0]);
    int check=search(arr,n,16);
    cout<<"The number is present at index: "<<check<<endl;
}