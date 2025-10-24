#include <iostream>
using namespace std;

void BubbleSort(int arr[], int len) {
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void WhatTriangleItIs(int a[]) {
    BubbleSort(a, 3);
    if (a[0] + a[1] <= a[2]) {
        cout << "Not triangle" << endl;
        return;
    }

    if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2]) {
        cout << "Right triangle" << endl;
    } else if (a[0] * a[0] + a[1] * a[1] > a[2] * a[2]) {
        cout << "Acute triangle" << endl;
    } else if (a[0] * a[0] + a[1] * a[1] < a[2] * a[2]) {
        cout << "Obtuse triangle" << endl;
    }

    if (a[0] == a[1] || a[1] == a[2]) {
        cout << "Isosceles triangle" << endl;
    }
    if (a[0] == a[1] && a[1] == a[2]) {
        cout << "Equilateral triangle" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a[3];
    for (int i = 0; i < 3; ++i) {
        cin >> a[i];
    }

    WhatTriangleItIs(a);
}