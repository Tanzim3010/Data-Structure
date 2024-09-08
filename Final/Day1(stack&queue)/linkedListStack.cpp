#include <iostream>
using namespace std;

class StackNode
{
public:
    int data;
    StackNode *next;

    StackNode(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class Stack
{
    StackNode *top;

public:
    Stack()
    {
        top = nullptr;
    }

    bool push(int x);
    int pop();
    int peak();
    bool isEmpty();
};

bool Stack::push(int x)
{
    StackNode *newNode = new StackNode(x);
    if (!newNode)
    { // Check if memory allocation was successful
        cout << "Stack overflow" << endl;
        return false;
    }
    newNode->next = top;
    top = newNode;
    cout << x << " pushed into stack" << endl;
    return true;
}

int Stack::pop()
{
    if (top == nullptr)
    { // Stack underflow condition
        cout << "Stack underflow" << endl;
        return 0;
    }
    int poppedValue = top->data;
    StackNode *temp = top;
    top = top->next;
    delete temp;
    return poppedValue;
}

int Stack::peak()
{
    if (top == nullptr)
    {
        cout << "Stack is empty" << endl;
        return 0;
    }
    return top->data;
}

bool Stack::isEmpty()
{
    return top == nullptr;
}

int main()
{
    Stack s;
    s.push(1);
    s.push(5);
    s.push(3);

    cout << s.pop() << " popped from the stack" << endl;

    cout << s.peak() << " is the top element" << endl;

    cout << "Elements in stack: ";
    while (!s.isEmpty())
    {
        cout << s.peak() << " ";
        s.pop();
    }

    return 0;
}