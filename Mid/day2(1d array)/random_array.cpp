/*take two integers from the user.Fill an integer of array of size 25 with random values between the two numbers given
by the user.Print the array.Also try this problem with characters instead of integers.*/

#include <iostream>
#include <random>
using namespace std;
int main(){
    int random;

    int arr1[25];
    for(int i = 0; i<25; i++ ){
        random = rand()%100;
        arr1[i] = random;

    }
    cout << "Printing array: " << endl;
    for(int i = 0; i<25; i++){
        cout << arr1[i]<< endl;
    }
}
