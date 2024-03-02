#include <iostream>
using namespace std;

//Recursion is the technique of making a function call itself.
//ex1
int factorial(int n)
{
    if (n > 0)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}

//ex2
int sum(int x){
    if(x>=0){
        return x+sum(x-1);
    }else{
        return 0;
    }
}

int main()
{
    int fact = factorial(1);
    cout << fact << "\n";
    int s =sum(5);
    cout << s << "\n";
    return 0;
}


/*The developer should be very careful with recursion as it can be quite easy to slip into writing a function which never terminates, or one that uses excess amounts of memory or processor power. However, when written correctly recursion can be a very efficient and mathematically-elegant approach to programming.*/