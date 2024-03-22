#include<bits/stdc++.h>
using namespace std;

int kth_missing(int a[],int n,int k){
    for(int i = 0; i < n;i++){
        if(a[i]<=k){
            k++;
        }else{
            break;
        }
    }
    return k;
}

int main(){
    int a[]={1,3,6,7,9,10,12,14,15};
    int n = sizeof(a) / sizeof(a[0]);
    int k=5;
    int kth_missing_number = kth_missing(a,n,k);
    cout<<"The " << k << "th missing number is: " << kth_missing_number << endl; 
    return 0;
}