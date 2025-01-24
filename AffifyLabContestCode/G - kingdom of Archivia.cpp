#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();

    int T;
    cin >> T;

    while (T--) {
        ll D, X, Y;
        cin >> D >> X >> Y;

        vector<pair<ll, ll>> dishes(D);
        for (ll i = 0; i < D; ++i) {
            cin >> dishes[i].first >> dishes[i].second;  // F[i], P[i]
        }

        // Sort dishes by the difference of F[i] - P[i] to prioritize higher happiness for adults
        sort(dishes.begin(), dishes.end(), [](const pair<ll, ll>& a, const pair<ll, ll>& b) {
            return (a.first - a.second) > (b.first - b.second);
        });

        ll happiness = 0;
        vector<bool> used(D, false);

        // Assign dishes to adults first
        for (ll i = 0; i < X; ++i) {
            happiness += dishes[i].first;  // Assign F[i] to adults
            used[i] = true;
        }

        // Then assign remaining dishes to kids
        for (ll i = X; i < X + Y; ++i) {
            if (!used[i]) {
                happiness += dishes[i].second;  // Assign P[i] to kids
            }
        }

        cout << happiness << "\n";
    }

    return 0;
}
