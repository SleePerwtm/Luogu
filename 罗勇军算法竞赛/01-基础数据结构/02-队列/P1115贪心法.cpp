#include <algorithm>
#include <cstdint>
#include <iostream>
using namespace std;

int main() {
    int n; // 序列的长度
    cin >> n;
    int x; // 当前输入
    int a; // 包含前一个元素的最大序列和
    int ans = INT32_MIN;
    // cout << ans << endl;
    // cout << sizeof(int) << endl;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (i == 0) {
            a = x;
            continue;
        }
        a = max(x, a + x);
        ans = max(ans, a);
    }
    cout << ans;
}