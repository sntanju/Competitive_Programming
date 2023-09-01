#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> permutation(n);
        for (ll i = 0; i < n; ++i) {
            permutation[i] = i + 1;
        }

        if (n % 2 == 0) {
            for (ll i = 0; i < n; i += 2) {
                swap(permutation[i], permutation[i + 1]);
            }
        } else {
            for (ll i = 0; i < n - 3; i += 2) {
                swap(permutation[i], permutation[i + 1]);
            }
            swap(permutation[n - 3], permutation[n - 1]);
            swap(permutation[n - 3], permutation[n - 2]);
        }

        for (ll i = 0; i < n; ++i) {
            cout << permutation[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
