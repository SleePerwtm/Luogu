#include <iostream>
#include <string>
using namespace std;

void solve(string& s, int l, int r) {
    int lr = (l + r) / 2; // 左序列右端

    if (l != r) {
        /* 递归处理左子串和右子串 */
        solve(s, l, lr);
        solve(s, lr + 1, r);
    }

    int count0 = 0;
    int count1 = 0;
    for (int i = l; i <= r; ++i) {
        if (s[i] == '0')
            ++count0;
        else
            ++count1;
    }
    if (count0 && count1)
        cout << 'F';
    else if (count0)
        cout << 'B';
    else
        cout << 'I';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int N;
    string s;
    cin >> N;
    cin >> s;

    solve(s, 0, (1 << N) - 1); // [0, 2^N-1]
}