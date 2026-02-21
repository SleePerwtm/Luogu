#include <iomanip>
#include <iostream>
using namespace std;

void PrintMatrix(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << right << setfill('0') << setw(2) << (i - 1) * n + j;
        }
        cout << endl;
    }
}

void PrintTriangle(int n) {
    int num = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (j >= n - i + 1) {
                cout << right << setfill('0') << setw(2) << num++;
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    PrintMatrix(n);
    cout << endl;
    PrintTriangle(n);

    return 0;
}