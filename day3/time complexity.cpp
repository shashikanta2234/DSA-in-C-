#include<iostream>
using namespace std;
int main() {
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++){
            cout<<"Time Complexity."<<endl;
        }
}

cout<<"Time Complexity of the outer loop is O(n**2) and Time Complexity of inner loop is O(n).\n";
return 0;
}