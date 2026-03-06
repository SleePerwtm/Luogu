#include <deque>
#include <iostream>
#include <vector>
using namespace std;

const int N = 2000004;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; // 序列项数
    int m; // 区间大小
    cin >> n >> m;
    deque<int> dq; // 存储的是索引
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        while (!dq.empty() && i - dq.front() > m)
            dq.pop_front();
        if (i == 0)
            cout << 0 << '\n';
        else
            cout << arr[dq.front()] << '\n';
        while (!dq.empty() && arr[dq.back()] > arr[i])
            dq.pop_back();
        dq.push_back(i);
    }
}