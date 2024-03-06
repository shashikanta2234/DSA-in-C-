#include<iostream>
using namespace std;
void printDivisors(int n){
    cout<<"The divisors of "<<n<<" are: ";
    for (int i=1;i<=n/2+1;i++) { 
        if (n%i ==  0)  {
            cout << " " << i ; 
        }
        }
        cout << " " << n<<endl ;
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    printDivisors(num);
    return 0;
}