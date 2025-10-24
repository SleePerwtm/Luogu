#include <algorithm>
#include <iostream>
using namespace std;

int num[3], price[3], cost[3];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int need_num;
    cin >> need_num;
    for (int i = 0; i < 3; ++i) {
        cin >> num[i] >> price[i];
        cost[i] = (need_num + num[i] - 1) / num[i] * price[i];
    }

    int result = min(cost[0], min(cost[1], cost[2]));
    cout << result << endl;
}