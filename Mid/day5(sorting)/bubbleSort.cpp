#include <iostream>
using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b= temp;
}

void bubbleSort(int arr[], int n) {
    for(int i =0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void print(int arr[], int size) {
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {55,60,44,222,15,24,63,57,59,88};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    print(arr,n);

    bubbleSort(arr,n);
    cout << "Sorted array: ";
    print(arr,n);
}