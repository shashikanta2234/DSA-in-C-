#include<iostream>
using namespace std;

int search(int a[],int n,int x){
    int low=0;
    int high=n-1;
    while (low<=high) {
        int mid = (low+high)/2;
        if(x==a[mid]){
            return mid;
        }
        else if(a[mid]<=a[high]){
            if(x>=a[mid] && x<=a[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }else{
            if(x>=a[low] && x<=a[mid]){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
}
return -1;
}
int main(){
    int arr[]={5,6,7,8,9,0,1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the number you want to check:";
    int x;
    cin>>x;
    int index=search(arr,n,x);
    if (index==-1){
        cout<<"Element is not present in array.";
    }else{
        cout<<"index of element "<<x<<" is: "<<index<<endl;
    }
    return 0;
}