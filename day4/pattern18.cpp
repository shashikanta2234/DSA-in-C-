#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    for(int i=str.length()-1;i>=0;i--){
        for(int j=str.length()-1;j>=i;j--){
            cout<<str[j];
           
    }cout<<endl;
}
}
