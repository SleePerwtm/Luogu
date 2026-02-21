#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string line;
    vector<string> grid;
    while (getline(cin, line)) {
        grid.push_back(line);
    }
    int n = grid.size();
    cout << n << " ";
    char pre = '0';
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] != pre) {
                cout << count << " ";
                count = 1;
                pre = grid[i][j];
            } else {
                count++;
            }
        }
    }
    cout << count;
}