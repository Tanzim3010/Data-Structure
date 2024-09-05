//Binary search cannot be implemented on unsorted array.So here selection sort has been implemented 

#include <iostream>

using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int k = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[k])
            {
                k = j;
            }
        }
        swap(arr[k], arr[i]);
    }
}


int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        
        if (arr[mid] == target) {
            return mid;
        }
        
        
        if (arr[mid] < target) {
            left = mid + 1;
        }
        
        else {
            right = mid - 1;
        }
    }
    
   
    return -1;
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {2,4,1,40,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 40;

    cout << "Unsorted array: ";
    printArray(arr, size);

    selectionSort(arr, size);
    
    cout << "Sorted array: ";
    printArray(arr, size);

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        cout << "Element is present at index " << result << endl;
    } else {
        cout << "Element is not present in array" << endl;
    }

    return 0;
}