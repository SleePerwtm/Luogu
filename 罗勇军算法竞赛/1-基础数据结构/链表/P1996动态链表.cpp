#include <iostream>
using namespace std;

struct LNode {
    int order;
    LNode* next;
};

void printList(LNode* h) {
    while (h != nullptr) {
        cout << h->order << " ";
        h = h->next;
    }
}

int main() {
    LNode* head = new LNode{1, nullptr};
    int n, m;
    cin >> n >> m;
    LNode* current = head;
    for (int i = 2; i <= n; ++i) {
        LNode* node = new LNode{i, nullptr};
        current->next = node;
        current = current->next;
    }
    current->next = head; // 循环链表完成
    // printList(head);
    current = head;
    LNode* pre = head;
    while ((n--) > 1) {
        for (int i = 1; i < m; ++i) {
            pre = current;
            current = current->next;
        }
        cout << current->order << ' ';
        pre->next = current->next;
        delete current;
        current = pre->next;
    }
    cout << current->order;
    delete current;
}