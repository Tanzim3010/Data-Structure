//find minimum and maximum value of a 2d array.

#include <iostream>
using namespace std;
int main() {
    int a[5][5];

    cout << "Enter the array: " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> a[i][j];
        }
    }
    cout << endl;

    int min = a[0][0];
    int max  = a[0][0];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(a[i][j] < min){
                min = a[i][j];
            }
            if(a[i][j] > max){
                max = a[i][j];
            }
        }
    }
    cout << "Minimum value from the matrix: " << min << endl;
    cout << "Maximum value from the matrix: " << max << endl;
}
