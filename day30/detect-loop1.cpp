#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Node class represents a node in a linked list
class Node {
public:
    int data;        
    Node* next;      
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// function to detect loop in linked list
bool detectLoop(Node* head) {
    Node* temp = head;  
    unordered_map<Node*, int> nodeMap;  

    // Step 2: Traverse the linked list
    while (temp != nullptr) {
        // If the node is already in the map, there is a loop
        if (nodeMap.find(temp) != nodeMap.end()) {
            return true;
        }
        // Store the current node in the map
        nodeMap[temp] = 1;
        // Move to the next node
        temp = temp->next;  
    }
    // without a loop, return false
    return false;
}

int main() {
    // Create a sample linked list with a loop for testing   
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
     // Create a loop
    fifth->next = third; 

    // Check if there is a loop in the linked list
    if (detectLoop(head)) {
        cout << "Loop detected in the linked list." << endl;
    } else {
        cout << "No loop detected in the linked list." << endl;
    }

    // Clean up memory (free the allocated nodes)
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}
