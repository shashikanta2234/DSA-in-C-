#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        int min = i;
        for (int j = i; j < n; j++){
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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
    selectionSort(arr, num);
    return 0;
}