#include<iostream>
using namespace std;

int remove_duplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}
int main(){
    int arr[14]={1,2,2,2,3,3,4,5,6,6,6,7,8,9};
    int n=remove_duplicates(arr,14);
    cout<<"The array after removing duplicates is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}