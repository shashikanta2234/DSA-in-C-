#include <iostream>
using namespace std;
int main(){
    int n,sum=1;
    cout<<"Number of rows to be printed : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<sum<< " ";
            sum++;
           
    }cout<<endl;
}
}
