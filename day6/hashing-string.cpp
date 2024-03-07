#include<iostream>
using namespace std;

int main(){
    //string
    string a="skjhfgkjnvcjxgfhdjhbvhjvg";
    //Hash Array initialisation with values 0
    int hash[26]={0};
    for (int i=0;i<26;i++) {
        hash[a[i]-'a']++;
        }
    
    cout<<"The frequency distribution of the array elements is : \n";
    for(int j = 0 ;j < 26 ; j++ ) {
        if(hash[j] !=  0){
            char c=j+'a';
            cout << "Element " << c<< " occurs " << hash[j] << " times\n";
        }
            
    }

    return 0;
}