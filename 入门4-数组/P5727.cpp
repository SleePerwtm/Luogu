#include <iostream>
using namespace std;

int arr[10005];

// 冰雹猜想过程逆序
void printReverseProcess(int n) {
    int i = 0;
    for (; n > 1; ++i) {
        arr[i] = n;
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
    }
    arr[i] = 1;

    cout << arr[i];
    for (int j = i - 1; j >= 0; --j) {
        cout << " " << arr[j];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    printReverseProcess(n);
}