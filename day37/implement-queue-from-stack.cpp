#include<bits/stdc++.h>
using namespace std;

queue<int> queueFromStack(stack<int>& stk) {
    queue<int> queue1;
    stack<int> temp1=stk;
    stack<int> temp2;
    while(!temp1.empty()){
        temp2.push(temp1.top());
        temp1.pop();
    }
    while(!temp2.empty()){
        queue1.push(temp2.top());
        temp2.pop();
    }
    return queue1;
}

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
    queue<int> queue1=queueFromStack(stack1);
    cout<<"Front: "<<queue1.front()<<endl;
    cout<<"Back: "<<queue1.back()<<endl;
    queue1.pop();
    cout<<"Front: "<<queue1.front()<<endl;
    cout<<"Empty: "<<queue1.empty()<<endl;
    cout<<"Size: "<<queue1.size()<<endl;
    return 0;
}