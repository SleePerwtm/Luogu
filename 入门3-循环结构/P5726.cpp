#include <algorithm>
#include <deque>
#include <iomanip>
#include <iostream>
using namespace std;

deque<int> score;
int n;

double CalculateAverageRemovedMaxAndMin(deque<int>& deq, int n) {
    sort(deq.begin(), deq.end());
    deq.pop_back();
    deq.pop_front();
    int sum = 0;
    for (auto& i : deq) {
        sum += i;
    }
    return (float)sum / (n - 2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    score.resize(n);
    for (auto& i : score) {
        cin >> i;
    }
    double result = CalculateAverageRemovedMaxAndMin(score, n);
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << result;
}