#include <iostream>
#include <vector>

using namespace std;

void solve(int n, int k, int x) {
    if (k == 1) {
        if (n == 1) {
            cout << "YES" << endl;
            cout << 0 << endl << endl;
        } else {
            cout << "NO" << endl << endl;
        }
    } else if (k == n) {
        cout << "NO" << endl << endl;
    } else {
        cout << "YES" << endl;
        int max_count = (n - x + k - 2) / (k - 1);
        int remaining = n - (max_count * (k - 1));

        if (remaining == x) {
            max_count--;
            remaining += k - 1;
        }

        cout << max_count << endl;
        for (int i = 0; i < max_count; i++) {
            cout << k << " ";
        }
        cout << remaining << endl << endl;
    }
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k, x;
        cin >> n >> k >> x;
        solve(n, k, x);
    }

    return 0;
}
