#include <deque>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    int k;
    cin >> n >> k;
    deque<int> dq;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        while (!dq.empty() && arr[dq.back()] < arr[i])
            dq.pop_back();
        dq.push_back(i);
        while (!dq.empty() && i - k >= dq.front())
            dq.pop_front();
        if (i <= k - 2)
            continue;
        cout << arr[dq.front()] << '\n';
    }
}