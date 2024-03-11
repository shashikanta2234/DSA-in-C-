#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &a, int low, int high) {
    int pivot = a[low];
    int i = low;
    int j = high;
    while (i < j) {
        while (a[i] <= pivot && i <= high - 1) {
            i++;
        }
        while (a[j] > pivot && j > low) {
            j--;
        }
        if (i < j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int tmp = a[low];
    a[low] = a[j];
    a[j] = tmp;
    return j;
}

void Sort(vector<int> &a, int low, int high) {
    if (low < high) {
        int partitionIndex = partition(a, low, high);
        Sort(a, low, partitionIndex - 1);
        Sort(a, partitionIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> a) {
    Sort(a, 0, a.size() - 1);
    return a;
}

int main() {
    vector<int> array = {5, 3, 9, 2, 7, 1, 6, 4, 2, 8};
    int n = array.size();
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << ' ';
    }
    cout << endl;
    array = quickSort(array);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << ' ';
    }
    cout << endl;

    return 0;
}