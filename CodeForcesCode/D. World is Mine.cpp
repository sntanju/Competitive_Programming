#include <bits/stdc++.h>
using namespace std;

#define N 5010
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) {
        ll n;
        cin >> n;

        vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, -1));
        vector<ll> ct(n + 1, 0);

        // Read the cakes' tastiness values and populate the count array
        for (ll i = 0; i < n; ++i) {
            ll x;
            cin >> x;
            ct[x]++;
        }

        // Define the recursive function inside main
        function<ll(ll, ll)> r = [&](ll i, ll asc) -> ll {
            if (asc < 0) return -2;
            if (i == 0) return (asc == 0) ? 0 : -2;
            if (dp[i][asc] != -1) return dp[i][asc];

            ll result = -2;
            if (ct[i] > 0) {
                result = r(i - 1, asc - 1);
            } else {
                result = r(i - 1, asc);
            }

            ll prevResult = r(i - 1, asc);
            if (prevResult != -2 && prevResult + ct[i] <= asc) {
                if (result == -2 || prevResult + ct[i] < result) {
                    result = prevResult + ct[i];
                }
            }

            dp[i][asc] = result;
            return result;
        };

        // Calculate the maximum number of cakes Alice can eat
        ll ans = n;
        for (ll i = n; i >= 0; --i) {
            if (r(n, i) != -2) {
                ans = i;
                break;
            }
        }

        cout << ans << '\n';

        // Reset ct and dp arrays for next test case
        fill(ct.begin(), ct.end(), 0);
        for (auto& row : dp) {
            fill(row.begin(), row.end(), -1);
        }
    }

    return 0;
}
