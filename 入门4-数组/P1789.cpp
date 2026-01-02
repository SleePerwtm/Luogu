#include <iostream>
#include <vector>
using namespace std;

int torch[][2] = {
    {-2, 0}, {-1, -1}, {-1, 0}, {-1, 1}, {0, -2}, {0, -1}, {0, 0},
    {0, 1},  {0, 2},   {1, -1}, {1, 0},  {1, 1},  {2, 0},
};

int glowstone[][2] = {
    {-2, -2}, {-2, -1}, {-2, 0}, {-2, 1}, {-2, 2}, {-1, -2}, {-1, -1},
    {-1, 0},  {-1, 1},  {-1, 2}, {0, -2}, {0, -1}, {0, 0},   {0, 1},
    {0, 2},   {1, -2},  {1, -1}, {1, 0},  {1, 1},  {1, 2},   {2, -2},
    {2, -1},  {2, 0},   {2, 1},  {2, 2},
};

bool in_bounds(int x, int y, int n) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, k;
    int x_in, y_in;  // 输入坐标
    int x_, y_;      // 计算后的坐标
    int spawn_count; // 记录可生成怪物的位置数量

    cin >> n >> m >> k;
    spawn_count = n * n;
    vector<vector<bool>> will_spawn(n, vector<bool>(n, true));

    // 处理火把
    for (int i = 0; i < m; ++i) {
        cin >> x_in >> y_in;
        for (int j = 0; j < 13; ++j) {
            x_ = x_in - 1 + torch[j][0];
            y_ = y_in - 1 + torch[j][1];
            if (in_bounds(x_, y_, n) && will_spawn[x_][y_]) {
                will_spawn[x_][y_] = false;
                --spawn_count;
            }
        }
    }

    // 处理荧石
    for (int i = 0; i < k; ++i) {
        cin >> x_in >> y_in;
        for (int j = 0; j < 25; ++j) {
            x_ = x_in - 1 + glowstone[j][0];
            y_ = y_in - 1 + glowstone[j][1];
            if (in_bounds(x_, y_, n) && will_spawn[x_][y_]) {
                will_spawn[x_][y_] = false;
                --spawn_count;
            }
        }
    }
    cout << spawn_count;
}