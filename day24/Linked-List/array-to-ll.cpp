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
//function to print the linked list
void printLL(Node* head){
    Node* tail=head;
    while(tail){
        cout<<tail->data<<" ";
        tail=tail->next;
    }
}
//Function to check if a node is present in the linked list or not 
void insertAtEnd(Node* head,int value){
    Node* Temp=head;
    Node* end=new Node(value);
    while(Temp){
        Temp=Temp->next;
        if(Temp->next==nullptr){
            Temp->next=end;
            break;
        }
    }
    
}
int checkData(Node* head,int value){
    int count=0;
    Node* Temp=head;
    while(Temp){
        if(Temp->data==value){
            count=1;
        }
        Temp=Temp->next;
    }
    return count;
}
int main(){
    int a[5]={0,1,2,3,4};
    Node* head=ArrayToLL(a,5);
    printLL(head);
    cout<<endl;
    cout<<checkData(head,15)<<endl;

    //inserting  node at the beginning of linked list
    Node* first=new Node(10);
    first->next=head;
    head=first;
    cout<<"After inserting at the beginning: "<<endl;
    printLL(head);
    cout<<endl;
    insertAtEnd(head,15);
     cout<<"After inserting at the end: "<<endl;
    printLL(head);
    return 0;
}