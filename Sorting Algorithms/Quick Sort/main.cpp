#include <iostream>
using namespace std;
void quickSort(int array[], int size){

}
int main(){
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    int array[size];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++)
        cin >> array[i];

    quickSort(array, size);

    cout << "Sorted array: ";
    for(int i = 0; i < size; i++)
        cout << array[i] << ' ';
    return 0;
}