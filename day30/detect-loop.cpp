#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
   Node(int data1){
        data=data1;
        next=nullptr;
    }
    Node(int data1,Node* next1) {
        data = data1;
        next = next1;  
    }
};

Node* arrayToLL(int a[],int n){
    Node* head = new Node(a[0]);  
    Node* tail = head;
    for(int i=1;i<n;i++){ 
       Node* temp = new Node(a[i]);
       tail->next = temp;
       tail = temp;
    }  
    return head;
}

void printLL(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int detectLoop(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}

Node* createLoopedLinkedList(int arr[], int n, int pos) {
    Node* head = nullptr;
    Node* tail = nullptr; 
    // Creating the linked list with given elements
    for (int i = 0; i < n; i++) {
        Node* newNode = new Node(arr[i]);

        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Making the loop
    Node* loopStart = head;
    for (int i = 0; i < pos - 1; i++) {
        loopStart = loopStart->next;
    }
    tail->next = loopStart;

    return head;
}

int main(){
    int arr[]={5,6,3,9,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* head=arrayToLL(arr,n);
    //printing linked list elements using function pointer
    printLL(head);
    cout<<endl;
    Node* head1=createLoopedLinkedList(arr,n,3);
    if(detectLoop(head1)){
        cout<<"Linked list head1 contains a loop."<<endl;
    }else{
        cout<<"Linked list head1 does not contain a loop."<<endl;
    }
    return 0;
}