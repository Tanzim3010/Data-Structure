//initialize an integer array of size 10. Print the number of time each element occurs in the array.

#include <iostream>
using namespace std;
int main() {
    int arr[10];

    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i<10; i++) {
        cin >> arr[i];
    }

    int counts[10 + 1] = {0};

    // Count occurrences of each element in the array
    for (int i = 0; i < 10; i++) {
        counts[arr[i]]++;
    }

    cout << endl;

    // Print the results
    for (int i = 1; i <= 10; i++) {
        if (counts[i] > 0) {
            cout << i << " occurs = " << counts[i];
            if (counts[i] == 1) {
                cout << " time" << endl;
            } else {
                cout << " times" << endl;
            }
        }
    }
}
