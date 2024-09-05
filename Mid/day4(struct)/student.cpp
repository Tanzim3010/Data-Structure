#include <iostream>
using namespace std;

struct Student
{
    int id;
    int creds;
    float cgpa;
};

int main()
{
    struct Student T[10];

    for (int i = 0; i < 2; i++)
    {
        cout << i + 1 << " Enter id: ";
        cin >> T[i].id;
        cout << i + 1 << " Enter creds: ";
        cin >> T[i].creds;
        cout << i + 1 << " Enter cgpa: ";
        cin >> T[i].cgpa;
        cout << endl;
    }
    cout << endl;
    cout << "Students who have completed more than 50 credits" << endl;

    for (int i = 0; i < 2; i++)
    {
        if (T[i].creds > 50)
        {
            cout << "Id: " << T[i].id << endl;
        }
    }

    cout << endl;
    cout << "Students who have cgpa more than 3.75" << endl;
     for (int i = 0; i < 2; i++)
    {
        if (T[i].cgpa > 3.75)
        {
            cout << "Id: " << T[i].id << endl;
        }
    }
}