#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    stack<int> s;
    vector<int> vec(N + 1);
    vector<int> ans(N + 1);
    for (int i = 1; i <= N; ++i) {
        cin >> vec[i];
    }
    for (int i = N; i >= 1; --i) {
        while (!s.empty() && vec[s.top()] <= vec[i])
            s.pop();
        if (s.empty()) {
            ans[i] = 0;
        } else {
            ans[i] = s.top();
        }
        s.push(i);
    }
    for (int i = 1; i <= N; ++i) {
        cout << ans[i] << '\n';
    }
}