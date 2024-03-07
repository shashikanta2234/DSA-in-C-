#include<iostream>
using namespace std;

int main(){
    //Array
    int a[]={2,5,9,3,7,6,4,2,6,1,8};
    //Hash Array initialisation with values 0
    int hash[12]={0};
    for (int i=0;i<12;i++) {
        hash[a[i]]++;
        }
    
    cout<<"The frequency distribution of the array elements is : \n";
    for(int j = 0 ;j < 12 ; j++ ) {
        if(hash[j] !=  0)
            cout << "Element " << j << " occurs " << hash[j] << " times\n";
    }

    return 0;
}