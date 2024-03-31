#include<bits/stdc++.h>
using namespace std;

void arrayToStack(int a[],int n,stack<int> &stack){
    for (int i = 0; i < n; i++){
        stack.push(a[i]);
    }
}
 
int main(){
    stack<int> stack1;
    int array1[5]={10,12,20,131,32};
    arrayToStack(array1,5,stack1);
    cout<<"Size of stack1 is : "<<stack1.size()<<endl;
    cout<<stack1.top()<<endl;
    stack1.pop();
    cout<<stack1.top()<<endl;
    cout<<"New Size of stack1 is : "<<stack1.size()<<endl;

}


/*

The functions associated with stack are: 
empty() - Returns whether the stack is empty
size() - Returns the size of the stack
top() - Returns a reference to the top most element of the stack) 
push(g) - Adds the element ‘g’ at the top of the stack
pop() - Deletes the most recent entered element of the stack

All the above function  have time complexity of O(1)

*/