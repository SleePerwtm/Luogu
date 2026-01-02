#include <iostream>
using namespace std;

char numMatrix[10][5][3] = {
    {
        {'X', 'X', 'X'},
        {'X', '.', 'X'},
        {'X', '.', 'X'},
        {'X', '.', 'X'},
        {'X', 'X', 'X'},
    },
    {
        {'.', '.', 'X'},
        {'.', '.', 'X'},
        {'.', '.', 'X'},
        {'.', '.', 'X'},
        {'.', '.', 'X'},
    },
    {
        {'X', 'X', 'X'},
        {'.', '.', 'X'},
        {'X', 'X', 'X'},
        {'X', '.', '.'},
        {'X', 'X', 'X'},
    },
    {
        {'X', 'X', 'X'},
        {'.', '.', 'X'},
        {'X', 'X', 'X'},
        {'.', '.', 'X'},
        {'X', 'X', 'X'},
    },
    {
        {'X', '.', 'X'},
        {'X', '.', 'X'},
        {'X', 'X', 'X'},
        {'.', '.', 'X'},
        {'.', '.', 'X'},
    },
    {
        {'X', 'X', 'X'},
        {'X', '.', '.'},
        {'X', 'X', 'X'},
        {'.', '.', 'X'},
        {'X', 'X', 'X'},
    },
    {
        {'X', 'X', 'X'},
        {'X', '.', '.'},
        {'X', 'X', 'X'},
        {'X', '.', 'X'},
        {'X', 'X', 'X'},
    },
    {
        {'X', 'X', 'X'},
        {'.', '.', 'X'},
        {'.', '.', 'X'},
        {'.', '.', 'X'},
        {'.', '.', 'X'},
    },
    {
        {'X', 'X', 'X'},
        {'X', '.', 'X'},
        {'X', 'X', 'X'},
        {'X', '.', 'X'},
        {'X', 'X', 'X'},
    },
    {
        {'X', 'X', 'X'},
        {'X', '.', 'X'},
        {'X', 'X', 'X'},
        {'.', '.', 'X'},
        {'X', 'X', 'X'},
    },
};

void printOnScreen(const string& digits) {
    int size = digits.size();
    for (int i = 0; i < 5; ++i) {
        int digit;
        for (int k = 0; k < size; ++k) {
            digit = digits[k] - '0';
            for (int j = 0; j < 3; ++j) {
                cout << numMatrix[digit][i][j];
            }
            if (k != size - 1) {
                cout << '.';
            }
        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    string digits(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> digits[i];
    }
    printOnScreen(digits);
}