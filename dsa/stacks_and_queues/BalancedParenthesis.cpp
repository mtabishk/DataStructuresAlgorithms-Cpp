#include <stack>
#include <iostream>

using namespace std;

bool isBalanced(string expression)
{
    // Write your code here
    stack <char> s;

    for (int i = 0; expression[i] != '\0'; i++) {

        if (expression[i] == '(' || expression[i] == '{' || expression[i] == '[' ) {
            s.push( expression[i] );

        } else if ( expression[i] == ')' || expression[i] == '}' || expression[i] == ']' ) {

            if (s.empty()) {
                return false;
            }
            char temp;
            if ( expression[i] == ')')
                temp = '(';
            else if ( expression[i] == '}')
                temp = '{';
            else if ( expression[i] == ']')
                temp = '[';


            if (s.top() != temp) {
                return false;
            } else {
                s.pop();
            }

        }
    }

    if (s.empty()) {
        return true;
    }

    return false;
}

int main() {

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string str = "a+b-c}";

    cout << "Result: " << isBalanced(str) << endl;

    return 0;
}