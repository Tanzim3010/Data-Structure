//show infix to postfix

#include <iostream>
#include <stack>
using namespace std;

int precedence(char op)
{
    if (op == '+' || op == '-')
    {
        return 1;
    }
    if (op == '*' || op == '/')
    {
        return 2;
    }
    return 0;
}

bool isOperand(char ch)
{
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

string infixToPostfix(string infix)
{
    stack<char> s;
    string postfix = "";

    for (string::size_type i = 0; i < infix.length(); i++)
    {
        char ch = infix[i];

        if (isOperand(ch))
        {
            postfix += ch;
        }
        else if (ch == '(')
        {
            s.push(ch);
        }
        else if (ch == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        }
        else
        {
            while (!s.empty() && precedence(s.top()) >= precedence(ch))
            {
                postfix += s.top();
                s.pop();
            }
            s.push(ch);
        }
    }
    while (!s.empty())
    {
        postfix += s.top();
        s.pop();
    }
    return postfix;
}

int main()
{
    string infix = "((A+B)-C*(D/E))+F";
    cout << "Infix: " << infix << endl;
    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;
}