#include<bits/stdc++.h>
using namespace std;                               
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    public:
    Node(int data1, Node* next1, Node* prev1) {  
        data = data1;  
        next = next1;  
        prev = prev1;  
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};
//function to create linked list from array
Node* ArrayToDLL(int a[],int n){
    Node* head=new Node(a[0]);
    Node* prev=head;
    for(int i=1;i<n;i++) {
        Node* temp= new Node(a[i]);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
//function to insert at the beginning
Node* insertAtBegin(Node* head,int val){
    if (head == NULL){
        return new Node(val);
    }
    Node* newNode=new Node(val,head,nullptr);
    head->prev=newNode;
    return newNode;

}

Node* insertBeforeTail(Node* head, int val) {
    if (head == nullptr) {
        return insertAtBegin(head, val);
    }
    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }
    Node* prev = tail->prev;
    Node* newNode = new Node(val, tail, prev);
    prev->next = newNode;
    tail->prev = newNode;
    return head;
}

//function to print the linked list
void printLL(Node* head){
    Node* tail=head;
    while(tail){
        cout<<tail->data<<" ";
        tail=tail->next;
    }
}
int main(){
    int a[5]={0,1,2,3,4};
    Node* head=ArrayToDLL(a,5);
    cout<<"DLL: ";
    printLL(head);
    cout<<endl;
    // int val;
    // cout<<"Enter value to be inserted before tail: ";
    // cin>>val;
    Node* head1=insertBeforeTail(head,12);
    printLL(head1);
    return 0;
}
