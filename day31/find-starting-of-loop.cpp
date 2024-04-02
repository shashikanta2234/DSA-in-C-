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

Node* detectLoopStart(Node* head){
    unordered_set<Node*> set1;
    Node* temp=head;
    while(temp!=NULL){
        if(set1.find(temp)!=set1.end()){
            return temp;
        }
        set1.insert(temp);
        temp=temp->next;
    }
    return NULL;
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
    Node* head1=arrayToLL(arr,n);
    //printing linked list elements using function pointer
    printLL(head1);
    cout<<endl;
    Node* loopStart1=detectLoopStart(head1);
    Node* head2=createLoopedLinkedList(arr,n,3);
    Node* loopStart2=detectLoopStart(head2);
    cout<<loopStart1<<endl;
    cout<<loopStart2<<endl;
    return 0;
}