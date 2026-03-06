#include <cstring>
#include <iostream>
#include <queue>
using namespace std;

int words[1002];

int main() {
    int M; // 内存容量
    int N; // 文章长度
    cin >> M >> N;
    int cnt = 0; // 查找次数

    queue<int> q;
    memset(words, 0, sizeof(words));

    while (N--) {
        int x;
        cin >> x;
        if (words[x]) {
            continue;
        }
        words[x] = 1;
        q.push(x);
        while (q.size() > M) {
            words[q.front()] = 0;
            q.pop();
        }
        ++cnt;
    }
    cout << cnt;
}