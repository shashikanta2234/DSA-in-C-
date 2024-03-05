#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    int n=str.length();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<str[j];
           
    }cout<<endl;
}
}
