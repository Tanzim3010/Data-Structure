/*
5.	Write a program to perform deletion a value in following scenario:
•	Delete last value 
•	Delete value 5
•	Delete first value
*/


#include <iostream>
using namespace std;

void deleteLast(int &n)
{
    if (n > 0)
    {
        n--;
    }
}

void deleteValue(int arr[], int &n, int value)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            break;
        }
    }
    if (i < n)
    {
        for (int j = i; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        n--;
    }
}

void deleteFirst(int arr[], int &n)
{
    if (n > 0)
    {
        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
    }
}

int main()
{
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;

    cout << "Given array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    deleteLast(n);
    deleteValue(arr, n, 5);
    deleteFirst(arr, n);

    cout << "Output array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
