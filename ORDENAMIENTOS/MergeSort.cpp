#include<iostream>
using namespace std;
void merge(int arr[], int beg, int mid, int end);
void mergeSort(int arr[], int beg, int end);

void merge(int arr[], int beg, int mid, int end)
{
    int output[end - beg + 1];
    int i = beg, j = mid + 1, k = 0;
    // add smaller of both elements to the output
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            output[k] = arr[i];
            k += 1; 
i += 1;
        }
        else {
            output[k] = arr[j];
            k += 1; 
j += 1;
        }
    }
    // remaining elements from first array
    while (i <= mid) {
        output[k] = arr[i];
        k += 1; 
i += 1;
    }
    // remaining elements from the second array
    while (j <= end) {
        output[k] = arr[j];
        k += 1; j += 1;
    }
    // copy output to the original array
    for (i = beg; i <= end; i += 1) {
        arr[i] = output[i - beg];
    }
}
void mergeSort(int arr[], int beg, int end) 
{
    if (beg < end) {
        int mid = (beg + end) / 2;
        //divide and conquer
        mergeSort(arr, beg, mid);    // divide : first half
        mergeSort(arr, mid + 1, end);  // divide: second half
        merge(arr, beg, mid, end);   // conquer
    }
}

int main() 
{
    int n = 6;
    int arr[6] = {5, 3, 4, 2, 1, 6};
    cout << "Input array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    mergeSort(arr, 0, n - 1); // Sort elements in ascending order
    cout << "Output array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}