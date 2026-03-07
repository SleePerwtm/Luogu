#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    stack<int> s;
    vector<int> vec(n + 1);
    vector<int> ans(n + 1);

    for (int i = 1; i <= n; ++i)
        cin >> vec[i];

    for (int i = n; i >= 1; --i) {
        while (!s.empty() && vec[s.top()] <= vec[i])
            s.pop();
        if (s.empty())
            ans[i] = 0;
        else
            ans[i] = s.top();
        s.push(i);
    }

    for (int i = 1; i <= n; ++i) {
        cout << ans[i];
        if (i != n)
            cout << ' ';
    }
}
