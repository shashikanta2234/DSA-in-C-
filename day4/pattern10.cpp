#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of columns : ";
    cin>>n;
    for(int i=1;i<2*n;i++){
        for(int j=0;j<n;j++){
            if(j<i && i<=n){
                cout<<"*";
            }else if(j<n-(i-n) && i>n){
                     cout<<"*";
                }

    }
    cout<<endl;
}
    return 0;
}