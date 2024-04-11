#include<bits/stdc++.h>
using namespace std;

queue<int> arrayToQueue(int a[],int n){
    queue<int> q;
    for(int i=0; i<n; i++){
        q.push(a[i]);
    }
    return q;
}

stack<int> queueToStack(queue<int>& queue){

    stack<int> stk;
    for(int i=0; i<queue.size(); i++) {
        stk.push(queue.front());
        int x=queue.front();
        queue.pop();
        queue.push(x);
    }
    return stk;
}

int main(){
    int arr[] = {1,4,6,8,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    queue<int> queue1=arrayToQueue(arr,n);
    stack<int> stack1=queueToStack(queue1);
    cout<<"The elements in the Stack are : "<<endl;
    cout<<"Top: "<<stack1.top()<<endl;
    stack1.pop();
    cout<<"Top: "<<stack1.top()<<endl;
    cout<<"is Empty: "<<stack1.empty()<<endl;
    cout<<"Size: "<<stack1.size()<<endl;
    return 0;
}