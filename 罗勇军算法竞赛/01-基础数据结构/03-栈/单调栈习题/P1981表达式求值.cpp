#include <iostream>
#include <stack>
#include <string>
using namespace std;

int priority(char a) {
    if (a == '+')
        return 0;
    else if (a == '*')
        return 1;
    return -1;
}

int calculate(int n1, int n2, char op) {
    if (op == '+')
        return n2 + n1;
    else if (op == '*')
        return n2 * n1;
    return -1;
}

void pop_and_calculate(stack<int>& s_num, stack<char>& s_op) {
    char op = s_op.top();
    s_op.pop();

    int n1 = s_num.top();
    s_num.pop();
    int n2 = s_num.top();
    s_num.pop();

    s_num.push(calculate(n1, n2, op) %
               10000); // 避免运算过程中超出int的最大范围造成数据丢失
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int num = 0;
    stack<int> s_num;
    stack<char> s_op;
    string expr;
    cin >> expr;
    for (auto c : expr) {
        if (c >= '0' && c <= '9') {
            num *= 10;
            num += c - '0'; // input为char类型，需要减去'0'来得到字面int值
        } else {
            num %= 10000;
            s_num.push(num);
            num = 0; // 保证下一个数字正常读入

            // 输入优先级小于栈顶，需要弹出栈顶运算符并计算
            while (!s_op.empty() && priority(c) < priority(s_op.top())) {
                pop_and_calculate(s_num, s_op);
            }
            s_op.push(c);
        }
    }
    s_num.push(num % 10000); // 最后一个数需要进行处理

    // 栈应该不为空（最后一个数还没有处理），依次弹出并计算
    while (!s_op.empty()) {
        pop_and_calculate(s_num, s_op);
    }

    cout << s_num.top();
    return 0;
}