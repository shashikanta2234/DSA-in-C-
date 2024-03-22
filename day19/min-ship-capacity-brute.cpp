#include<bits/stdc++.h>
using namespace std;

int days(int w[],int n, int capacity){
    int days = 1;
    int load=0;
    for(int i=0; i<n; i++){
        if(load + w[i] > capacity) {
            days++;
            load = w[i];
        }else{
            load+=w[i];
        }
    }
    return days;
}

int capacity(int w[], int n,int day){
    int minCap=INT_MIN;
    int maxCap=0;
    int capacity=INT_MAX;
    for(int i=0; i<n; i++){
        minCap=max(minCap,w[i]);
        maxCap+=w[i];
    }
    for(int i=minCap; i<=maxCap; i++){
        if(days(w,n,i)==day){
            return i;
        }
    }
    return -1;
}

int main(){
    int weights[]={1,2,3,4};
    int n=sizeof(weights)/sizeof(weights[0]);
    int d = 1;
    int ans = capacity(weights,n, d);
    cout << "The minimum capacity should be: " << ans <<endl;

}