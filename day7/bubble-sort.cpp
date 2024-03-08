#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n-i; j++){
            if (arr[j+1] < arr[j]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }  
    }
    cout << "After sorting the array is : ";
    for (int k = 0; k < n; k++)
        cout << arr[k] << " ";
}

int main(){

    int num;
    cout << "Enter number of elements in the array: ";
    cin >> num;
    int arr[num];
    cout << "\nEnter elements of the array: \n";
    for (int i = 0; i < num; i++){
        cin >> arr[i];
    }
    bubbleSort(arr, num);
    return 0;
}