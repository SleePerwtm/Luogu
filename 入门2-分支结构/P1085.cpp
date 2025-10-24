#include <iostream>
using namespace std;

int school[7], extra[7];

int main() {
    int worst_day = 0, max_hour = 8;
    int hour;

    for (int i = 0; i < 7; ++i) {
        cin >> school[i] >> extra[i];
        hour = school[i] + extra[i];
        if (hour < 8) {
            continue;
        }

        if (hour > max_hour) {
            worst_day = i + 1;
            max_hour = hour;
        }
    }

    cout << worst_day << endl;
}