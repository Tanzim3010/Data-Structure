#include <iostream>
using namespace std;
int main()
{
    int arr1[5];

    cout << "Enter integer values: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr1[i];
    }

    cout << "Array members are: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << endl;
    }
}
