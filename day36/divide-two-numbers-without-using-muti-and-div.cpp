#include<bits/stdc++.h>
using namespace std;

int divideWithoutDivisionOrMultiplication(int divisor, int dividend) {
    int q=0;
    int val=0;
    while (val<=dividend) {
        val+=divisor;
        if(val>dividend){
            return q;
        }else{
        q++;
        }
    }
    return q;  
}

int main() {
    int divisor=10;
    int dividend=150;  //156
    cout << "The quotient of division is :"<< divideWithoutDivisionOrMultiplication(divisor, dividend);
    return 0;
}