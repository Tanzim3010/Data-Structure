//write a function that takes TWO parameters to print all the odd numbers between a given range.Input the starting value of the range and ending value of the range.Then,send them as parameters to your function
#include <iostream>
using namespace std;
void odd(int arr[], int n){
    cout << "odd numbers in the array: " << endl;
    for(int i = 0; i<n; i++){
        if(arr[i]%2!=0){
            cout << arr[i] << endl;
        }
    }
}

int main() {
    int startingValue,endingValue;
    int size;

    cout << "Enter starting value: ";
    cin >> startingValue;

    cout << "Enter ending value: ";
    cin >> endingValue;

    size = endingValue - startingValue + 1;

    int numbers[size];

    for(int i = 0; i<size; i++){
        numbers[i] = startingValue + i;
    }
    odd(numbers,size);
}
