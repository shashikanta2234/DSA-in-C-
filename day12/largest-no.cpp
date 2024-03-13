#include<iostream>
using namespace std;

void largest(int a[],int n){
        for (int j = 0; j < n-1; j++){
            if (a[j+1] < a[j]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
    }
cout<<"Largest: " << a[n-1]<<endl ;
}

void largest_element(int a[],int n){
    for(int i=0; i<1; i++){
        for (int j = 0; j < n-i; j++){
            if (a[j+1] < a[j]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
    }
}
cout<<"Largest element is: " << a[n-1]<<endl ;
}

int main(){
    int ar[]={1,2,8,9,5,6,7};
    largest_element(ar,7);
    largest(ar,7);
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