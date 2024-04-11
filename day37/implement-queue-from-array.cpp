#include<bits/stdc++.h>
using namespace std;

queue<int> arrayToQueue(int a[],int n){
    queue<int> q;
    for(int i=0; i<n; i++){
        q.push(a[i]);
    }
    return q;
}

int main(){
    int arr[] = {1,4,6,8,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    queue<int> queue1=arrayToQueue(arr,n);
    cout<<"Front: "<<queue1.front()<<endl;
    cout<<"Back: "<<queue1.back()<<endl;
    queue1.pop();
    cout<<"Front: "<<queue1.front()<<endl;
    cout<<"Empty: "<<queue1.empty()<<endl;
    cout<<"Size: "<<queue1.size()<<endl;
    return 0;
}