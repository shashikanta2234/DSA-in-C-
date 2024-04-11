#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1, Node* next1){
        data=data1;
        next = next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
//function to create linked list from array
Node* ArrayToLL(int a[],int n){
    Node* head=new Node(a[0]);
    Node* tail=head;
    for(int i=1;i<n;i++) {
        Node* temp= new Node(a[i]);
        tail->next=temp;
        tail=temp;
    }
    return head;
}

stack<int> linkedListToStack(Node* head){
    stack<int> stk;
    Node* temp=head;
    while(temp!=nullptr){
        stk.push(temp->data);
        temp=temp->next;
    }
    return stk;
}

int main(){
    int arr[] = {1,4,6,8,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* ll=ArrayToLL(arr,n);
    stack<int> stack1=linkedListToStack(ll);
     cout<<"Top: "<<stack1.top()<<endl;
    stack1.pop();
    cout<<"Top: "<<stack1.top()<<endl;
    cout<<"is Empty: "<<stack1.empty()<<endl;
    cout<<"Size: "<<stack1.size()<<endl;
    return 0;
}