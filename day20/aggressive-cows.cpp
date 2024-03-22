#include<bits/stdc++.h>
using namespace std;

bool can_We_Place(vector<int> v,int cows,int dis){
    int count=1;
    int pos=v[0];
    for (int i = 1; i < v.size(); ++i) {
        if (v[i]-pos >= dis) {
            count++;
            pos = v[i];
        }
        if(count>=cows){
        return true;
    }
    }
    return false;
}

int max_possible_min(vector<int> v,int cows){
    sort(v.begin(),v.end());
    int low = v[0], high = v[v.size() - 1];
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (can_We_Place(v,cows,mid)) {
            low=mid+1;
        } else {
            high = mid - 1;
        }
    }
    return high;
}

int main(){
    vector<int> v={0,3,4,7,10,9};
    int  cows=4;
    cout<<"Maximum possible minimum distance: "<<max_possible_min(v,cows);
    return 0;
}