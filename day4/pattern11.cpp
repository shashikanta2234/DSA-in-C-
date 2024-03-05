#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Number of rows to be printed : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i==j){
                 cout<<1;
            }else if((j+i)%2==0){
                 cout<<1;
            }else{
                cout<<0;
            }
           
    }cout<<endl;
}
}