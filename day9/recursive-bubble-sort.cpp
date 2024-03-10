#include<iostream>
using namespace std;

void recursiveBubble(int a[],int n){
    if(1==n){return;}
    for (int i = 0; i <=n-2; i++)
    {
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    recursiveBubble(a,n-1);
    
}

int main(){
    int arr[]={5,9,2,1,7,3,4,2,9,4,2,1};
    int num=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original array is: ";
    for(int i=0;i<num;i++){cout << arr[i] << " ";}
    cout << "\nSorted array in ascending order: ";
    recursiveBubble(arr,num);
    for(int i=0;i<num;i++){cout << arr[i] << " ";}
    return 0;
}