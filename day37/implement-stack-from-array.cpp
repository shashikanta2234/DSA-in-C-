#include<bits/stdc++.h>
using namespace std;

stack<int> arrayToStack(int a[],int n){
    stack<int> stk;
    for(int i=0; i<n; i++){
        stk.push(a[i]);
    }
    return stk;
}

int main(){
    int arr[] = {1,4,6,8,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    stack<int> stack1=arrayToStack(arr,n);
    cout<<"The elements in the Stack are : ";
    cout<<stack1.top()<<endl;
    stack1.pop();
    cout<<stack1.top()<<endl;
    cout<<stack1.empty()<<endl;
    cout<<stack1.size()<<endl;
    return 0;
}