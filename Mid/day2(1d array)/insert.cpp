//Write a program to perform insert a value in following scenario:
//add 100 at the end of the array
//add 200 in index number 4
//add 300 in the beginning of the array

#include <iostream>
using namespace std;
void insertAtEnd(int arr[], int n, int value, int index)
{
    if (index == n)
    {
        arr[n] = value;
    }
    else
    {
        for (int i = n - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = value;
    }
    n++;
}

void insertAtIndex(int arr[], int n, int value, int index)
{

    for (int i = n - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[index] = value;
    n++;
}

void insertAtBeginning(int arr[], int n, int value)
{
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = value;
    n++;
}

int main()
{
    int arr[20] = {1, 2, 3, 4, 5,6,7,8,9,10};
    int n = 10;

    cout << "The array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    insertAtEnd(arr, n, 100, 10);
    n++;

    insertAtBeginning(arr, n, 300);
    n++;

    insertAtIndex(arr, n, 200, 5);
    n++;

    cout << "After insert: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}