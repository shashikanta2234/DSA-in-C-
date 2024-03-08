#include <iostream>
using namespace std;
void insertionSort(int a[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
        }
    }
    cout<<"Array after insertion sort is : ";
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}
int main(){
    int num=6;
    int arr[]={5,3,8,2,1,0};
    insertionSort(arr,num);
    return 0;

}