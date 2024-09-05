#include <iostream>
using namespace std;

struct Employee
{
    string name;
    string id;
    string dept;
};

int main()
{
    struct Employee T[5];

    cout << "Enter informations" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name " << i + 1 << ": ";
        cin >> T[i].name;
        cout << "Enter id " << i + 1 << ": ";
        cin >> T[i].id;
        cout << "Enter dept " << i + 1 << ": ";
        cin >> T[i].dept;
    }
    cout << endl;
    cout << "Showing all info" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << " name: " << T[i].name << endl;
        cout << i + 1 << " id: " << T[i].id <<endl;
        cout << i + 1 << " dept: " << T[i].dept <<endl;
    }
}