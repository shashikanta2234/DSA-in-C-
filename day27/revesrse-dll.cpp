#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;   
    Node* next;     
    Node* prev;     

    Node(int data1, Node* next1, Node* prev1) {
        data = data1;
        next = next1;
        prev = prev1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node* convert_array_to_DLL(int a[],int n) {
    Node* head = new Node(a[0]);
    Node* prev = head;            
    for (int i = 1; i <n; i++) {  
        Node* temp = new Node(a[i], nullptr, prev);
        prev->next = temp; 
        prev = temp;       
    }
    return head;  
}

void printLL(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";  
        head = head->next;         
    }
}

Node* revDLL(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head; 
    }
    Node* prev = NULL;  
    Node* current = head;   
    while (current != NULL) {
        prev = current->prev; 
        current->prev = current->next; 
        current->next = prev;          
        current = current->prev; 
    }
    return prev->prev;
}

int main(){
    int a[]={0,1,2,3,4,89};
    int n=sizeof(a)/sizeof(a[0]);
    Node* head=convert_array_to_DLL(a,n);
    cout<<"DLL: ";
    printLL(head);
    cout<<endl;
    head=revDLL(head);
    cout<<"Reversed DLL: ";
    printLL(head);
    return 0;
}