#include <iostream>
using namespace std;
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void heapify(int arr[], int n, int i) {
    int largest = i, left = 2 * i + 1, right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void buildHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

}
void heapSort(int arr[], int n) {
    buildHeap(arr, n);
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    cout << "Enter the elements of the array: ";
    for(int a = 0; a < size; a++)
        cin >> array[a];
    heapSort(array, size);
    for(int i: array){
        cout << i << " ";
    }
    return 0;
}