//evaluate the postfix

#include <iostream>
#include <stack>

using namespace std;

int evaluatePostfix(string exp)
{
    // Create a stack of capacity equal to expression size
    stack<int> st;

    // Scan all characters one by one
    for (string::size_type i = 0; i < exp.size(); ++i)
    {

        // If the scanned character is an operand (number here), push it to the stack.
        if (isdigit(exp[i]))
            st.push(exp[i] - '0');

        // If the scanned character is an operator, pop two elements from stack apply the operator
        else
        {
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            switch (exp[i])
            {
            case '+':
                st.push(val2 + val1);
                break;
            case '-':
                st.push(val2 - val1);
                break;
            case '*':
                st.push(val2 * val1);
                break;
            case '/':
                st.push(val2 / val1);
                break;
            }
        }
    }
    return st.top();
}

// Driver code
int main()
{
    string exp = "231*+9-";

    // Function call
    cout << "postfix evaluation: " << evaluatePostfix(exp);
    return 0;
}
