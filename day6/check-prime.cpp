#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter the number to be checked: ";
    cin>>n;
    for(int i=2;i<n/2;i++){
        if (n%i==0){
            count++;
        }
        
    }
    if(count==0){
        cout<<n<<" is a prime number."<<endl;
    }else{
        cout<<n<<" is not a prime number."<<endl;
    }
    
    return 0;
}