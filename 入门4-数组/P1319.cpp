#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, code;
    int flag = 0;
    int pos = 0;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    while (cin >> code) {
        for (int i = 0; i < code; ++i) {
            matrix[pos / n][pos % n] = flag;
            pos++;
        }
        flag = !flag;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}