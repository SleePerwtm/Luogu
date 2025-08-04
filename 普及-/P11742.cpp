#include <iostream>
using namespace std;
const int MOD = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    long long ans = 1;
    cin >> n;
    for (int i = 1; i <= n - 1; i++)
    {
        ans *= i;
        ans %= MOD;
    }
    if (n % 2 == 0)
    {
        cout << (n * ans) % MOD << '\n';
        for (int i = 1; i <= n; i++)
            cout << 0 << '\n';
    }
    else
    {
        cout << ((n - 1) / 2 * ans) % MOD << '\n';
        cout << ((n + 1) / 2 * ans) % MOD << '\n';
        for (int i = 2; i <= n; i++)
            cout << 0 << '\n';
    }
    return 0;
}