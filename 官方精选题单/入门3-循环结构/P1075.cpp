#include <iostream>
using namespace std;

bool IsPrime(int n) {
    if (n == 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 2; i <= 2000000000; ++i) {
        if (IsPrime(i) && n % i == 0) {
            cout << n / i << endl;
            break;
        }
    }
}