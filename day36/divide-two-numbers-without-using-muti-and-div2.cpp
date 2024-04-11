#include<bits/stdc++.h>
using namespace std;

int quotient(int divisor, int dividend) {
    if(dividend==divisor){return 1;}
    bool sign=true;
    if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor <  0)) {sign = false;}
    dividend = abs(dividend);
    divisor = abs(divisor);
    int ans = 0;
    while(dividend >= divisor){
        int count=0;
    while (dividend>=(divisor<<(count+1))){
        count++;
    }
    ans += (1<<count);
    dividend =dividend-(divisor*(1<<count));
    }
    if(ans>=INT_MAX && sign==true){
        return INT_MAX;
    }
    if(ans>=INT_MAX && sign==false){
        return INT_MIN;
    }
    return sign?ans:-1*ans;
    }

int main() {
    int divisor=10;
    int dividend=156; 
    cout << "The quotient of division is :"<< quotient(divisor, dividend);
    return 0;
}