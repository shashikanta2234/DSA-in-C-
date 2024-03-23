#include <bits/stdc++.h>
using namespace std;

void countFreq(int a[],int n){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++) {
        m[a[i]]++;
    }
    int minF=INT_MAX,maxF=INT_MIN;
    int minVal=0,maxVal=0;
    for (auto x : m) {
        int freq=x.second;
        int val=x.first;
        if(freq>maxF){
            maxVal=val;
            maxF=freq;
        }
        
        if(freq<minF){
            minVal=val;
            minF=freq;
        }
    }
    cout<<"Element with maximum frequency: "<<maxVal<<endl;
    cout<<"Element with minimum frequency: "<<minVal<<endl;
}


int main(){
    int a[]={10,5,15,10,5,10,2,10,10};
    int n = sizeof(a)/sizeof(a[0]);
    countFreq(a,n);
    return 0;
}