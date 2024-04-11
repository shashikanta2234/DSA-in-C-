#include<bits/stdc++.h>
using namespace std;

bool checkParanthesis(string str){
    stack<char> stk;
    for(int i=0; i<str.length(); i++){
        if (str[i] == '(' || str[i] == '{' || str[i]=='['){
            stk.push(str[i]);
        }else{
            if(stk.size() == 0){return false;}
            char top = stk.top();
            stk.pop();
            if((top=='(' && str[i]==')') || (top=='{' && str[i]=='}') || (top=='[' && str[i]==']')){
                continue;
            }else{return false;}
        }
    }
    return true;
}

int main(){
    string str="()[{()]";
    if(checkParanthesis(str)){
        cout << "Valid expression.";  
    }else{     
        cout << "Not a valid expression.";  
    }  
    return 0;
}