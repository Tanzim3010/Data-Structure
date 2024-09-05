//adding rows sum for array

#include <iostream>
using namespace std;
int main() {
    int a[5][5];

    cout << "Enter the matrix: " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> a[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < 3; i++) {
        int sum = 0; //resetting the sum for each row to show individual row calculation
        for (int j = 0; j < 3; j++) {
            sum += a[i][j];
        }
        // Output the sum of each row
        cout << "Sum of row " << i + 1 << ": " << sum << endl;
    }
    cout << endl;
}
