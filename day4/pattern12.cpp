#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Number of rows to be printed : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if(j<=i){
                 cout<<j;
            }else if(j>2*n-i){
                 cout<<(2*n-(j-1));
            }else{
                cout<<" ";
            }
           
    }cout<<endl;
}
}
