#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="I am revising the Concepts of Strings.";
    int n=str.length();
    char ch='S';
    cout << "Enter a character to search for: ";
    for(int i=0; i<n; i++){
        if (str[i] == ch) {
            cout << "First occurrance of character '"<<ch<<"' is at index: "<<i<<endl;
            break;
        }
    }
    int count=0;
    for(int i=0; i<n; i++){
        if (str[i] == ch) {
            count++;
        }
    }
    cout<<"No. of occurrance of character '"<<ch<<"'"<<" is "<<count<<endl;
    return 0;
}