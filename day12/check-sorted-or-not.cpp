#include<iostream>
using namespace std;

void check(int a[],int n){
    int swap=0;
        for (int j = 0; j < n-1; j++){
            if (a[j+1] < a[j]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swap=1;
            }
    }
    if(swap==0){
        cout << "True"<<endl;
    }    
    else{
        cout << "False"<<endl;
    }
}

void check_order(int a[],int n){
    int swap=0;
    for(int i=0; i<1; i++){
        for (int j = 0; j < n-i; j++){
            if (a[j+1] < a[j]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swap=1;
            }
    }
}
    if(swap==0){
        cout << "True"<<endl;
    }    
    else{
        cout << "False"<<endl;
    }
}

int main(){
    int ar[]={1,2,8,9,5,6,7};
    int a[]={1,2,3,4,5,6,7};
    check_order(ar,7);
    check(a,7);
    return 0;
}

// void bubbleSort(int arr[],int n){
//     for (int i = 0; i < n - 1; i++){
//         for (int j = 0; j < n-i; j++){
//             if (arr[j+1] < arr[j]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }  
//     }
//     cout << "After sorting the array is : ";
//     for (int k = 0; k < n; k++)
//         cout << arr[k] << " ";
// }