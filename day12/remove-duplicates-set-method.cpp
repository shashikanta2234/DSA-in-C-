#include<iostream>
#include<set>
using namespace std;

int remove_duplicates(int a[],int n){
    set <int> s;

    for (int i = 0; i < n; i++) {
        s.insert(a[i]);
    }
    int j=0;
    for(auto it=s.begin();it!=s.end();it++) {
        a[j++]=*it;
    }
    return s.size();
}

int main(){
    int arr[14]={1,2,2,2,3,3,4,5,6,6,6,7,8,9};
    int n=remove_duplicates(arr,14);
    cout<<"The array after removing duplicates is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}