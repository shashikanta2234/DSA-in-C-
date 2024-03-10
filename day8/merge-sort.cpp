#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else if(arr[left]>=arr[right]){
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left<=mid)
    {
        temp.push_back(arr[left]);
            left++;
    }
    while (right<=high)
    {
        temp.push_back(arr[right]);
            right++;
    }
    
for(int k=low;k<=high;k++){
    arr[k]=temp[k-low];
}
}

void mergeSort(vector<int> &a,int low,int high){
    if(low>=high){
        return ;
    }else{
        int mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

int main(){
    vector<int> ab={8,2,5,1,6,3,7,2,9,1};
    mergeSort(ab,0,9);
    cout<<"The sorted array is : ";
    for(int i=0;i<10;i++)
        cout << ab[i] << " ";
    return 0;
}