#include<bits/stdc++.h>
using namespace std;                               
class Node{
    public:
    int data;
    Node* next;
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
int length_of_LL(Node* head){
    Node* temp=head;
    int count=0;
    while (temp){
        count++;
        temp=temp->next;
    }
    return count;
}
int main(){
    int a[5]={0,1,2,3,4};
    Node* head=ArrayToLL(a,5);
    printLL(head);
    cout<<endl;
    int len=length_of_LL(head);
    cout<<"length of LL is:"<<len<<endl;
    return 0;
}