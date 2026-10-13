#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;

    return 0;
}
string infixToPostfix(string expression) {
    stack<char> st;
    string output = "";
    for (char ch : expression) {

        // 1. If operand, add to output
        if (isalnum(static_cast<unsigned char>(ch))) {
            output += ch;
        }
        // 2. If opening bracket, push it
        else if (ch == '(') {
            st.push(ch);
        }
        // 3. If closing bracket, pop until '('
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                output += st.top();
                st.pop();
            }
            if (!st.empty()) {
                st.pop(); // Remove '('
            }
        }

        // 4. If operator, handle precedence
        else if (precedence(ch) > 0) {
            while (!st.empty() &&
                   st.top() != '(' &&
                   precedence(st.top()) >= precedence(ch)) {
                output += st.top();
                st.pop();
            }

            st.push(ch);
        }
    }

    // 5. Pop remaining operators
    while (!st.empty()) {
        output += st.top();
        st.pop();
    }

    return output;
}

int main() {
    string expression = "(A+B)*(C-D)";

    cout << "Postfix: "
         << infixToPostfix(expression) << endl;

    return 0;
}