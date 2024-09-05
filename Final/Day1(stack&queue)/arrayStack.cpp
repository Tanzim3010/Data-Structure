#include <iostream>
using namespace std;

#define MAX 5

class Stack
{
    int top;

public:
    int a[MAX]; // Maximum size of stack

    Stack()
    {
        top = -1;
    }
    bool push(int x);
    int pop();
    int peak();
    bool isEmpty();
};

bool Stack::push(int x)
{
    if (top >= (MAX - 1))
    {
        cout << "Stack overflow" << endl;
        return false;
    }
    else
    {
        a[++top] = x; // Pre-increment top, then assign the value
        cout << x << " pushed into stack" << endl;
        return true;
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack underflow" << endl;
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}

int Stack::peak()
{
    if (top < 0)
    {
        cout << "Stack is empty" << endl;
        return 0;
    }
    else
    {
        int x = a[top]; // Just retrieve the current top value
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}

int main()
{
    Stack s;
    s.push(1);
    s.push(5);
    s.push(3);
    s.push(4);
    s.push(7);
    s.push(0);

    cout << s.pop() << " popped from the stack" << endl;

    cout << s.peak() << " is the top element" << endl;

    cout << "Elements in stack: ";
    while (!s.isEmpty())
    {
        cout << s.peak() << " ";
        s.pop();
    }
}
