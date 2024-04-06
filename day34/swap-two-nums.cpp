#include<bits/stdc++.h>
using namespace std;
//swapping using XOR operator ^
void swap(int a,int b) {
    a=a^b;
    b=b^a;
    a=a^b;
}
int main(){
    int a=15;
    int b=12;
     cout<<"Value of A before swapping is: " << a << endl;  
    cout<<"Value of B before swapping is: " << b << endl;
    swap(a,b);
    cout<<"Value of A after swapping is: " << a << endl;  
    cout<<"Value of B after swapping is: " << b << endl;

    return 0;
}
