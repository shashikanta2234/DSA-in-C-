#include<bits/stdc++.h>
using namespace std;

int count_students(vector<int> &a,int pages){
    int std=1;
    int count=0;
    for (int i = 0; i < a.size(); ++i) {
        if (count+a[i] <=pages ) {
            count+=a[i];
        }else{
            std++;
            count=a[i];
        }
        }
        return std;
}

int min_possible_max(vector<int>&v,int n,int m){
    if(m>n){
        return -1;
    }
    int minPages=*min_element(v.begin(),v.end());
    int maxPages=accumulate(v.begin(),v.end(),0);
    for (int i = minPages; i <= maxPages; i++){
        if(count_students(v,i)==m){
            return i;
        }
    }
    return minPages;   
}
	
int main(){
    vector<int> arr = {25, 46, 28, 49, 24};
    int n = 5;
    int m = 4;
    int ans = min_possible_max(arr, n, m);
    cout << "Minimum possible maximum pages: " << ans << "\n";
    return 0;
}