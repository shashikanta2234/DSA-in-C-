#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
            if(j>i && j<2*n-i){
                cout<<'*';
            }else{
                cout<<' ';
        } 
    }
    cout<<endl;
}
return 0;
}