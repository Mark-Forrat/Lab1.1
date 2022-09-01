#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a = 1000, b = 0.0001, sum;
    double a1 = 1000, b1 = 0.0001, sum1;
    sum = (pow((a - b), 3) - pow(a, 3)) / (pow(b, 3) - 3 * a * pow(b, 2) - 3 * pow(a, 2) * b);
    sum1 = (pow((a1 - b1), 3) - pow(a1, 3)) / (pow(b1, 3) - 3 * a1 * pow(b1, 2) - 3 * pow(a1, 2) * b1);
    cout << sum << endl;
    cout << sum1;
    return 0;
}