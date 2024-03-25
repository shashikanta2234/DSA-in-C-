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
int main(){
    int a[5]={0,1,2,3,4};
    Node head=Node(a[0]);
    cout<<head.next<<endl;
}