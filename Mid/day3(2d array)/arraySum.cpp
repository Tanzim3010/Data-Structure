//print the sum of two 2d arrays

#include <iostream>
using namespace std;
int main(){
    int a[5][5],b[5][5];

    cout << "Enter first array: "; //input of array a
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>a[i][j];
        }
    }

    cout << endl;
    cout << "Enter second array: "; //input of array b
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>b[i][j];
        }
    }
    cout << endl;

    int sum[5][5];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum[j][i] = a[i][j] + b[i][j]; //adding two arrays
        }
    }
    cout << endl;
    cout << "Sum of two arrays: " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << sum[i][j] << " "; //printing added array
        }
        cout << endl;
    }

}
