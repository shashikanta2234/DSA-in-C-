#include<iostream>
using namespace std;

void max_ones(int arr[], int n){
    int count=0;
    int count2=0;
    for (int i = 0; i <n; i++)
    {
       if (arr[i] == 1) {
          count++;
        } else {
          count = 0;
        }

        count2 = max(count2, count);
       
    }
    cout<<"Max number of consecutive ones is " << count2 ;
    
}

int main(){
   int arr[]={1,1,0,0,1,1,1,1,0};
   int n=sizeof(arr)/sizeof(arr[0]);
   max_ones(arr,n);
   return 0;
}