#include<bits/stdc++.h>
using namespace std;
int onceOccurredElement(int a[],int n){
    int x=0;
    for (int i = 0; i < n; ++i) {
        x=x^a[i];
    }
    return x;
}
int main(){
    int arr[]={2,3,5,4,3,2,1,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The number that occurred once in the array is: "<<onceOccurredElement(arr,n)<<endl;
}