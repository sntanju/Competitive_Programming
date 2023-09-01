#include <iostream>
#include <vector>

using namespace std;

vector<int> constructArray(int x, int y, int n) {
    vector<int> result;

    // Calculate the difference between y and x
    int diff = y - x;

    // Initialize the array with -1 values
    result.assign(n, -1);

    // Handle the edge case where diff < n
    if (diff < n) {
        return {-1};
    }

    // Calculate the step size for the array
    int step = diff / (n - 1);

    // Construct the array using the calculated step size
    result[0] = x;
    for (int i = 1; i < n; ++i) {
        result[i] = result[i - 1] + step;
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;

        vector<int> result = constructArray(x, y, n);

        if (result[0] == -1) {
            cout << -1 << endl;
        } else {
            for (int num : result) {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
