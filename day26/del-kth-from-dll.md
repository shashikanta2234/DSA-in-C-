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
//function to print the linked list
void printLL(Node* head){
    Node* tail=head;
    while(tail){
        cout<<tail->data<<" ";
        tail=tail->next;
    }
}

void delete_kth_Node(Node* head,int k){
    
    if (head==NULL || k<=0 ) {
        return;
    }
    Node* temp=head;
    int count=0;
    while (temp)
    {   
        count++;
        if(count==k){
            Node* front=temp->next;
            front->prev=temp->prev;
            temp->prev->next=front;
            temp->next=NULL;
            temp->prev=NULL;
            delete temp;
            break;
        }
        temp=temp->next;
    }
    
}
int main(){
    int a[5]={0,1,2,3,4};
    Node* head=ArrayToDLL(a,5);
    cout<<"DLL: ";
    printLL(head);
    cout<<endl;
    int k;
    cout<<"Enter value of k: ";
    cin>>k;
    delete_kth_Node(head,k);
    cout<<"After deleting  the "<<k<<"th node DLL becomes :";
    printLL(head);
    return 0;
}