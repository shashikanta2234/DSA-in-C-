#include<iostream>
using namespace std;

void recursiveInsertion(int a[],int j,int n){
    if(j==n){return;}
    int i=j;
    while(i>0 && a[i-1]>a[i])
    {
            int temp=a[i];
            a[i]=a[i-1];
            a[i-1]=temp;
            i--;
    }
    recursiveInsertion(a,j+1,n);
}

int main(){
    int arr[]={5,9,2,1,7,3,4,2,9,4,2,1};
    int num=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original array is: ";
    for(int i=0;i<num;i++){cout << arr[i] << " ";}
    cout << "\nSorted array in ascending order: ";
    recursiveInsertion(arr,0,num);
    for(int i=0;i<num;i++){cout << arr[i] << " ";}
    return 0;
}