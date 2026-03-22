#include <iostream>
#include <string>
using namespace std;

void printPreorder(const string& inorder, const string& postorder) {
    if (inorder.size() > 0) {
        char root = postorder[postorder.size() - 1];
        cout << root;
        int index = inorder.find(root);
        printPreorder(inorder.substr(0, index), postorder.substr(0, index));
        printPreorder(inorder.substr(index + 1, inorder.size() - index - 1),
                      postorder.substr(index, postorder.size() - index - 1));
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    string inorder;
    string postorder;

    cin >> inorder;
    cin >> postorder;
    printPreorder(inorder, postorder);
}