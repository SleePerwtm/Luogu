#include <iostream>
using namespace std;

int a[101];
int t1[20001] = {0};
int t2[20001] = {0};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        t1[a[i]] = 1;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            t2[a[i] + a[j]] = 1;
        }
    }
    int count = 0;
    for (int i = 1; i <= 20000; ++i) {
        if (t1[i] == 1 && t2[i] == 1) {
            count++;
        }
    }
    cout << count << endl;
}
