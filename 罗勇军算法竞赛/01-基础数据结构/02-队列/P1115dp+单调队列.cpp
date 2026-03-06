#include <algorithm>
#include <cstdint>
#include <deque>
#include <iostream>
using namespace std;

const int N = 200005;
int s[N]; // 前缀和

int main() {
    ios::sync_with_stdio(false);
    int n; // 序列的长度
    cin >> n;
    int ans = INT32_MIN;
    deque<int> dq; // 存储的是前缀和的  索引值
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
        if (i > 0)
            s[i] += s[i - 1];
        if (dq.empty())
            ans = max(ans, s[i]);
        else if (s[dq.front()] < 0)
            ans = max(ans, s[i] - s[dq.front()]);
        else
            ans = max(ans, s[i]);
        while (!dq.empty() && s[dq.back()] > s[i])
            dq.pop_back();
        dq.push_back(i); // 注意别写成dq.push_back(s[i]);
    }
    cout << ans;
}