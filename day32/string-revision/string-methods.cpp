#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1="Sapna ";
    string str2="Kumari";
    cout<<"Original Strings:\nString 1: "<<str1<<"\nString 2: "<<str2<<endl;
    
    // Concatenating two strings using '+' operator
    string res=str1+str2;
    cout<<"After concating string1 and string2 the resultant string is: "<<res<<endl;
    // Appending one string to another using '+=' operator
    str1+=str2;
    cout<<"After appending string2 to string1, string1 becomes: "<<str1<<endl;

    int n1=str1.length();
    int n2=str2.length();
    if(n1 > n2){
        cout<<"The length of first string is greater than second string."<<endl;
    }else{
        cout<<"The length of first string is less than or equal to second string."<<endl;
    }
    
    return 0;

}