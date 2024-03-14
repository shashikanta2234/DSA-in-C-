#include<iostream>
using namespace std;

void left_rotate(int a[],int n,int r){
    int temp[r];
    for(int i=0; i<r; i++){
        temp[i]=a[i];
    }
    for(int j=0; j<n-r; j++){
        a[j]=a[j+r];
    }
    int j=n-r;
    for(int k=0; k<r; k++){
        a[j++]=temp[k];
    }
    // Copying the data from temporary array to original array.
    cout<<"After one left rotate: ";
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
        }
}

int main(){
    int a[7]={0,1,2,3,4,5,6};
    left_rotate(a,7,4);
    return 0;
}