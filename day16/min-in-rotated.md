#include<iostream>
using namespace std;

void miN(int a[],int n){
    int low=0;
    int high=n-1;
    int m;
    while (low<=high) {
        m=(low+high)/2;
        if(a[m]<=a[high]){
            high=m;
        }else{
            low=m;
        }
    }
    cout<<"Minimum Element in the array is: "<<a[m];
}
int main(){
    int arr[]={5,6,6,6,9,0,1,1,2,4,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    miN(arr,n);
    return 0;
}