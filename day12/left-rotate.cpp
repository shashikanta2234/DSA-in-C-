#include<iostream>
using namespace std;

void left_rotate(int a[],int n){
    int temp[n];
    for(int i=1; i<n; i++){
        temp[i-1]=a[i];
    }
    temp[(n-1)] = a[0];
    // Copying the data from temporary array to original array.
    cout<<"After one left rotate: ";
    for(int j=0;j<n;j++){
        cout<<temp[j]<<" ";
        }
}

int main(){
    int a[7]={0,1,2,3,4,5,6};
    left_rotate(a,7);
    return 0;
}