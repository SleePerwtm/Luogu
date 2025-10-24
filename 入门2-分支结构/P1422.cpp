#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

double CalculateCurrentFee(int degree) {
    if (degree <= 150) {
        return 0.4463 * degree;
    } else if (degree <= 400) {
        return 0.4463 * 150 + 0.4663 * (degree - 150);
    } else {
        return 0.4463 * 150 + 0.4663 * 250 + 0.5663 * (degree - 400);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int degree;
    double result;
    cin >> degree;
    result = CalculateCurrentFee(degree);
    cout << fixed << setprecision(1) << result;
}