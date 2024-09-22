//reverse the first K elements of the queue

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseElements(queue<int> &q, int k)
{
    if (q.empty() || k <= 0 || static_cast<size_t>(k) > q.size())
    {
        return;
    }

    stack<int> s;

    for (int i = 0; i < k; i++)
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    int remainingElements = q.size() - k;
    for (int i = 0; i < remainingElements; i++)
    {
        q.push(q.front());
        q.pop();
    }
}
int main()
{
    // Example queue
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k = 3;

    cout << "Original Queue: ";
    queue<int> temp = q; // Temporary queue to print the original state
    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // Reverse the first K elements
    reverseElements(q, k);

    // Print the modified queue
    cout << "Modified Queue after reversing first " << k << " elements: ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}