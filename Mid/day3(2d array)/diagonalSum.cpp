//adding the diagonal numbers of a matrix

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

    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < 3; i++) {
        sum1 += a[i][i];
        sum2 += a[i][3 - i - 1];
    }

    cout << "Sum of the primary diagonal: " << sum1 << endl;
    cout << "Sum of the secondary diagonal: " << sum2 << endl;
}
