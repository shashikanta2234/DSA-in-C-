#include<bits/stdc++.h>
using namespace std;

void arrayToQueue(int a[],int n,queue<int> &queue){
    for (int i = 0; i < n; i++){
        queue.push(a[i]);
    }
}
 
int main(){
    queue<int> queue1;
    int array1[5]={10,12,20,131,32};
    arrayToQueue(array1,5,queue1);
    cout<<"Size of queue1 is : "<<queue1.size()<<endl;
    cout<<queue1.front()<<endl;
    cout<<queue1.back()<<endl;
    queue1.pop();
    queue1.push(102);
    queue1.emplace(25);
    cout<<queue1.back()<<endl;
}


/*

The functions associated with queue are: 
empty() – Returns whether the stack is empty
size() – Returns the size of the stack 
front() - Returns a reference to the first element of the queue
back() - Returns a reference to the last element of the queue 
push(g) 	- Adds the element ‘g’ at the end of the queue
swap() - Exchange the contents of two queues but the queues must be of the same data type, although sizes may differ
emplace() - Insert a new element into the queue container, the new element is added to the end of the queue


All the above function  have time complexity of O(1)

*/