#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    string pre;
    string post;
    cin >> pre;
    cin >> post;

    long long ans = 1;
    for (int i = 0; i < pre.size() - 1; i++) {
        for (int j = 1; j < post.size(); j++) {
            if (pre[i] == post[j] && pre[i + 1] == post[j - 1]) {
                ans *= 2;
                break;
            }
        }
    }

    cout << ans;
    return 0;
}