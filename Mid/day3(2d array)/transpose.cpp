//transpose a matrix

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
    cout << "Transposed matrix: " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << a[j][i] << " ";
        }
        cout<<endl;
    }
}
