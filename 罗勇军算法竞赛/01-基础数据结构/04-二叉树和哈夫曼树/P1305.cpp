#include <iostream>
#include <vector>
using namespace std;

void preOrderTraversal(char root, vector<string>& node, vector<int>& index) {
    if (root == '*')
        return;

    cout << root;
    int root_index = index[root - 'a'];
    preOrderTraversal(node[root_index][1], node, index);
    preOrderTraversal(node[root_index][2], node, index);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n;
    cin >> n;
    vector<string> node(n);
    vector<int> index(26);

    for (int i = 0; i < n; ++i) {
        cin >> node[i];
        index[node[i][0] - 'a'] = i;
    }

    preOrderTraversal(node[0][0], node, index);
}