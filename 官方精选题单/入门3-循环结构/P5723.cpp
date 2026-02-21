#include <iostream>
using namespace std;

bool IsPrime(int num) {
    bool flag = true;
    if (num == 1) {
        flag = false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int L;
    cin >> L;

    int num = 0, sum = 0;
    for (int i = 2; sum + i <= L; ++i) {
        if (IsPrime(i)) {
            cout << i << endl;
            ++num;
            sum += i;
        }
    }

    cout << num << endl;
}