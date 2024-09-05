//initialize an integer array of 10 elements and print how many numbers are odd and how many numbers are even

#include<iostream>
using namespace std;
int main(){
    int arr1[10];
    int evenCount = 0;
    int oddCount = 0;

    cout << "Enter the members of the array: " << endl;
    for(int i =0; i<10; i++){
        cin >> arr1[i];
    }
    for(int i =0; i<10; i++){
        if(arr1[i]%2==0) {
            evenCount++;
        }
        else {
             oddCount++;
        }
    }
    cout << oddCount << " odd numbers" << endl;
    cout << evenCount << " even numbers" << endl;

}
