#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 顺时针转90
vector<string> trans1(const vector<string>& before) {
    int n = before.size();
    vector<string> transed(n, string(n, ' '));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            transed[j][n - 1 - i] = before[i][j];
        }
    }
    return transed;
}

// 顺时针转180
vector<string> trans2(const vector<string>& before) {
    return trans1(trans1(before));
}

// 顺时针转270
vector<string> trans3(const vector<string>& before) {
    return trans1(trans1(trans1(before)));
}

// 反射，即水平方向翻转
vector<string> trans4(const vector<string>& before) {
    int n = before.size();
    vector<string> transed(n, string(n, ' '));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            transed[i][n - 1 - j] = before[i][j];
        }
    }
    return transed;
}

int main() {
    int n;
    cin >> n;
    vector<string> before(n), after(n);
    cin >> ws; // 忽略换行符
    for (int i = 0; i < n; ++i) {
        getline(cin, before[i]);
    }
    for (int i = 0; i < n; ++i) {
        getline(cin, after[i]);
    }
    if (trans1(before) == after) {
        cout << 1 << endl;
    } else if (trans2(before) == after) {
        cout << 2 << endl;
    } else if (trans3(before) == after) {
        cout << 3 << endl;
    } else if (trans4(before) == after) {
        cout << 4 << endl;
    } else if (trans1(trans4(before)) == after ||
               trans2(trans4(before)) == after ||
               trans3(trans4(before)) == after) {
        cout << 5 << endl;
    } else if (before == after) {
        cout << 6 << endl;
    } else {
        cout << 7 << endl;
    }
}