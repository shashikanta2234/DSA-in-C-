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
//function to convert array to linked list
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

//function to print elements of linked list
void printLL(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
//function to  find middle of linked list
Node* middleOfLL(Node* head) {
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    temp=head;
    for(int i=0;i<(count/2);i++) {
        temp=temp->next;
    }
    return temp;
}
int main(){
    int arr[]={5,6,3,9,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* head=arrayToLL(arr,n);
    //printing linked list elements using function pointer
    printLL(head);
    cout<<endl<<"Middle of LL: ";
    Node* mid=middleOfLL(head);
    printLL(mid);
    return 0;
}