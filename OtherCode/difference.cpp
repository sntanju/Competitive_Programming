#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double x1, x2, y1, y2, x, y, temp, answer;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    x = x2 - x1;
    y = y2 - y1;
    temp = (x * x) + (y * y);
    answer = sqrt(temp);
    cout << fixed << setprecision(4) << answer;

    return 0;
}
