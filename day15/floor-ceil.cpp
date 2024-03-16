#include<iostream>
using namespace std;

int Floor(int a[],int low,int high,int num){
    if(low>=high && num!=a[low]){
        return low-1;
    }
    int mid = (low+high)/2;
    if(num==a[mid]){
        return mid;
    }else{
        if(num < a[mid]){
            return Floor(a,low,mid-1,num);
        }else{
            return Floor(a,mid+1,high,num);
        }
    }
}
int Ceil(int a[],int low,int high,int num){
    if(low==high && num!=a[high]){
        return high;
    }
    int mid = (low+high)/2;
    if(num==a[mid]){
        return mid;
    }else{
        if(num <a[mid]){
            return Ceil(a,low,mid-1,num);
        }else{
            return Ceil(a,mid+1,high,num);
        }
    }
}


int main(){
    int arr[]={1,1,2,4,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the number you want to search for: ";
    int num;
    cin>>num;
    int floor= Floor(arr,0,n-1,num);
    int ceil=Ceil(arr,0,n-1,num);
    cout<<"Floor: "<<arr[floor]<<endl;
    cout<<"Ceil: "<<arr[ceil]<<endl;
    return 0;
}