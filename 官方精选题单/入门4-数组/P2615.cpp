#include <iostream>
#include <vector>
using namespace std;

void printMagicSquare(int n) {
    vector<vector<int>> ms(n, vector<int>(n, 0));
    struct Point {
        int x, y;
        int val;
    };
    Point before{0, n / 2, 1};
    ms[before.x][before.y] = before.val;
    for (int i = 2; i <= n * n; ++i) {
        Point next;
        next.val = i;
        if (before.x == 0) {
            if (before.y != n - 1) {
                next.x = n - 1;
                next.y = before.y + 1;
            } else {
                next.x = before.x + 1;
                next.y = before.y;
            }
        } else if (before.y == n - 1 && before.x != 0) {
            next.x = before.x - 1;
            next.y = 0;
        } else {
            if (ms[before.x - 1][before.y + 1] == 0) {
                next.x = before.x - 1;
                next.y = before.y + 1;
            } else {
                next.x = before.x + 1;
                next.y = before.y;
            }
        }
        ms[next.x][next.y] = next.val;
        before = next;
    }

    for (const auto& row : ms) {
        for (const auto& val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    printMagicSquare(n);
}