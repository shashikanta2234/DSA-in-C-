#include<bits/stdc++.h>
using namespace std;

int count_sub_arrays(vector<int> &arrays, int sum) {
    int count = 1;
    long long sum_of_SA = 0;
    for (int i = 0; i < arrays.size(); i++) {
        if (sum_of_SA + arrays[i] <= sum) {
            sum_of_SA += arrays[i];
        } else {
            count++;
            sum_of_SA = arrays[i];
        }
    }
    return count;
}


int min_largest_sum(vector<int> &arrays,int n,int k){
    if(k>n){
        return -1;
    }
    int min_sum=*max_element(arrays.begin(),arrays.end());
    int max_sum=-accumulate(arrays.begin(),arrays.end(),0);
    while(min_sum<=max_sum){
        int mid_val=(min_sum+max_sum)/2;
        if(count_sub_arrays(arrays,mid_val)>k){
                min_sum=mid_val+1;
        }else{
                max_sum=mid_val-1;
        }
    }
    return min_sum;
}

int main()
{
    vector<int> a = {10, 20, 30, 40};
    int n=a.size();
    int k = 2;
    int ans = min_largest_sum(a,n, k);
    cout << "The minimun possible largest sum is: " << ans << "\n";
    return 0;
}