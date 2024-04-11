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
//function to create queue from linked list 
queue<int> linkedListToQueue(Node* head){
    queue<int> q1;
    Node* temp=head;
    while(temp!=nullptr){
        q1.push(temp->data);
        temp=temp->next;
    }
    return q1;
}

int main(){
    int arr[] = {1,4,6,8,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* ll=ArrayToLL(arr,n);
    queue<int> queue1=linkedListToQueue(ll);
    cout<<"Front: "<<queue1.front()<<endl;
    queue1.pop();
    cout<<"Front: "<<queue1.front()<<endl;
    cout<<"is Empty: "<<queue1.empty()<<endl;
    cout<<"Size: "<<queue1.size()<<endl;
    return 0;
}