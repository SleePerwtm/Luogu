#include <algorithm>
#include <iostream>
using namespace std;

long long n, m, arr[400002], b[400002];

void Solve() {
    cin >> n >> m;
    long long len, index = 0, result = 0;

    for (int i = 0; i < n; i++) {
        cin >> len;
        arr[++index] = i - len;
        arr[++index] = i + len;
    }

    sort(arr + 1, arr + n * 2 + 1);

    for (int i = 2; i < 400002; ++i) {
        b[i] = i - 1 + b[i - 1];
    }

    int temp = 1;
    for (int i = 2; i <= n * 2; ++i) {
        if (arr[i] == arr[i - 1]) {
            ++temp;
        }
        if (arr[i] != arr[i - 1] || i == n * 2) {
            result += b[temp];
            temp = 1;
        }
    }

    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solve();
}