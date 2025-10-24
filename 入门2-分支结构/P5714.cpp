#include <iostream>
using namespace std;

enum Result { kUnderweight, kNormal, kOverweight };
string result_list[3] = {"Underweight", "Normal", "Overweight"};

inline double CalculateBMI(double m, double h) { return m / (h * h); }

int main() {
    double m, h;
    cin >> m >> h;

    double bmi = CalculateBMI(m, h);

    if (bmi < 18.5) {
        cout << result_list[kUnderweight] << endl;
    } else if (bmi < 24.0) {
        cout << result_list[kNormal] << endl;
    } else {
        cout << bmi << endl;
        cout << result_list[kOverweight] << endl;
    }
}