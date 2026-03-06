#include <deque>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;         // 序列长度
    int k;         // 窗口大小
    deque<int> dq; // **存放的是元素在原序列中的位置**

    cin >> n >> k;
    vector<int> seq(n);
    for (int i = 0; i < n; ++i)
        cin >> seq[i];

    // for (int i = 0; i < n; ++i)
    //     cout << seq[i] << ' ';

    for (int i = 0; i < n; ++i) {
        /* 保证双端队列单调，队首最小 */
        while (!dq.empty() && seq[dq.back()] > seq[i]) {
            dq.pop_back(); // 去尾
        }
        dq.push_back(i);

        if (i + 1 >= k) { // 到达第一个窗口时开始执行输出与去头
            while (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }
            cout << seq[dq.front()];
            if (i != n - 1)
                cout << ' ';
        }
    }
    cout << '\n';

    /* 清空队列，这一点很重要！！！ */
    while (!dq.empty())
        dq.pop_back();

    for (int i = 0; i < n; ++i) {
        /* 保证双端队列单调，队首最大 */
        while (!dq.empty() && seq[dq.back()] < seq[i]) {
            dq.pop_back(); // 去尾
        }
        dq.push_back(i);

        if (i + 1 >= k) { // 到达第一个窗口时开始执行输出与去头
            while (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }
            cout << seq[dq.front()];
            if (i != n - 1)
                cout << ' ';
        }
    }
}