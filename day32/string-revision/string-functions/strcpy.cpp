#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char str1[13]="Shashikanta";
    char str2[10]="Sapna";
    cout<<"str1: "<<str1<<"\nstr2: "<<str2<<endl;
    strcpy( str1 , str2);
    cout<<"After copying str2 to str1:\nstr1: "<<str1<<"\nstr2: "<<str2<<endl;

    return 0;

}