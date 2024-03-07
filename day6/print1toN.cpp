#include<iostream>
using namespace std;
int i=1;
void printUptoN(int n){
    if(i>n) {return ;
    }else{
        cout<<i<<endl;
        i++;
        printUptoN(n);
    }
}

int main(){
    int num;
    cout<<"Number: ";
    cin>>num;
    printUptoN(num);
    return 0;
}