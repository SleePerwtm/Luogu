#include <cctype>
#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int num = 0;  // 数字暂存
    char input;   // 输入的字符
    stack<int> s; // 存储数字的栈

    while (cin >> input) {
        if (input >= '0' && input <= '9') {
            num *= 10;
            num += input - '0';
        } else if (input == '.') {
            s.push(num);
            num = 0;
        } else if (input == '@') {
            cout << s.top();
        } else {
            int n1 = s.top();
            s.pop();
            int n2 = s.top();
            s.pop();
            int result;
            switch (input) {
            case '+':
                result = n2 + n1;
                break;
            case '-':
                result = n2 - n1;
                break;
            case '*':
                result = n2 * n1;
                break;
            case '/':
                result = n2 / n1;
                break;
            }
            s.push(result);
        }
    }
}