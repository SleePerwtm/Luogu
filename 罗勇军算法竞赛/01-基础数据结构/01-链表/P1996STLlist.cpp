#include <iostream>
#include <list>
using namespace std;

void printList(list<int> nodes) {
    for (auto i : nodes)
        cout << i << ' ';
}

int main() {
    int n, m;
    cin >> n >> m;
    list<int> nodes;
    for (int i = 1; i <= n; ++i)
        nodes.push_back(i);
    // printList(nodes);
    list<int>::iterator it = nodes.begin();
    while (nodes.size() > 1) {
        for (int i = 1; i < m; ++i) {
            ++it;
            if (it == nodes.end()) // 循环链表
                it = nodes.begin();
        }
        cout << *it << ' ';
        list<int>::iterator next = (++it)--;
        if (next == nodes.end()) // 循环链表
            next = nodes.begin();
        nodes.erase(it);
        it = next;
    }
    cout << *it;
}
