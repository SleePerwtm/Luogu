#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int X, K;
    N = N / (52 * 7);
    K = 1;
    X = N - 3 * K;
    while (X > 100) {
        ++K;
        X = N - 3 * K;
    }
    cout << X << endl;
    cout << K << endl;
    return 0;
}