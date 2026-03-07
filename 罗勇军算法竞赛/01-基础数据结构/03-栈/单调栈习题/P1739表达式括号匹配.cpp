#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    char input;
    stack<char> s; // 存储括号的栈
    while (cin >> input) {
        if (input == '@') {
            if (s.empty())
                cout << "YES";
            else
                cout << "NO";
            break;
        }

        int cnt;
        if (input == '(') {
            s.push(input);
        } else if (input == ')') {
            if (!s.empty() && s.top() == '(')
                s.pop();
            else {
                cout << "NO";
                break;
            }
        }
    }
}