#include <cstddef>
#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int order;
    Node* l;
    Node* r;
};

int main() {
    size_t N; // 同学个数
    size_t k; // k号同学
    int p;    // 插入，0左1右
    size_t M; // 删除的同学个数
    int x;    // 要移除的x号同学

    cin >> N;
    Node* lNode = new Node{1, nullptr, nullptr};
    vector<Node*> ptrs(N + 1); // 储存各序号同学结点指针的数组
    ptrs[1] = lNode;

    for (int i = 2; i <= N; ++i) {
        cin >> k >> p;
        Node* kPtr = ptrs[k];
        Node* insert = new Node{i, nullptr, nullptr};
        ptrs[i] = insert;
        if (p == 1) { // 右插
            insert->l = kPtr;
            if (kPtr->r)
                kPtr->r->l = insert;
            insert->r = kPtr->r;
            kPtr->r = insert;
        } else { // p == 0 左插
            insert->r = kPtr;
            if (kPtr->l)
                kPtr->l->r = insert;
            insert->l = kPtr->l;
            kPtr->l = insert;
            if (lNode == kPtr)
                lNode = insert;
        }
    }

    cin >> M;
    for (int i = 0; i < M; ++i) {
        cin >> x;
        Node* xPtr = ptrs[x];
        if (xPtr == nullptr)
            continue;
        if (xPtr->l)
            xPtr->l->r = xPtr->r;
        if (xPtr->r)
            xPtr->r->l = xPtr->l;
        if (xPtr == lNode)
            lNode = xPtr->r;
        ptrs[x] = nullptr;
        delete xPtr;
    }

    for (Node* cur = lNode; cur; cur = cur->r) {
        cout << cur->order;
        if (cur->r)
            cout << ' ';
    }
}