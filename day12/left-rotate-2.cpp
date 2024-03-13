#include<iostream>
using namespace std;

void left_rotate(int a[],int n){
    int temp=a[0];
    for(int i=0; i<n-1; i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;
    // Copying the data from temporary array to original array.
    cout<<"After one left rotate: ";
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
        }
}

int main(){
    int a[7]={0,1,2,3,4,5,6};
    left_rotate(a,7);
    return 0;
}