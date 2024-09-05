//fill an array of integers(any size) with user input and print the array forwards and backwards

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter array size: ";
    cin >> n; //taking user input for array size
    int arr1[n];

    cout << "Enter members of the array: " << endl;
    for(int i = 0; i<n; i++){
        cin >> arr1[i];
    }

    cout << "Printing the array forwards: " << endl;
    for(int i = 0; i < n; i++){
        cout << arr1[i] << endl;
    }

    cout << "Printing the array backwards: " << endl;
    for(int i = n-1; i>=0; i--){
        cout << arr1[i] << endl;
    }

}
