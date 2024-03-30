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

Node* reverseLL(Node* head){
    if(head==nullptr || head->next == nullptr){
        return head;
    }
    Node* Back=NULL;
    Node* current = head;
    while (current != NULL) {
        Node* front = current->next;
        current->next = Back;
        Back = current;
        current = front;
    }
    return  Back;

}
int main(){
    int arr[]={5,6,3,9,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* head=arrayToLL(arr,n);
    //printing linked list elements using function pointer
    printLL(head);
    cout<<endl<<"Middle of LL: ";
    Node* mid=reverseLL(head);
    printLL(mid);
    return 0;
}