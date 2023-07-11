#include <bits/stdc++.h>

#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //ifstream cin("input.txt");
    //freopen("input.txt", "r", stdin);

    int tt;
    cin >> tt;

    while (tt--) {
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1) {
            cout << "YES\n";
            cout << n << "\n";
            for (int i = 0; i < n; ++i) {
                cout << "1 ";
            }
            cout << "\n";
            continue;
        }
        if (k == 1) {
            cout << "NO\n";
            continue;
        }
        if (k == 2) {
            if (n % 2) {
                cout << "NO\n";
                continue;
            }
            cout << "YES\n";
            cout << n / 2 << "\n";
            for (int i = 0; i < n / 2; ++i) {
                cout << "2 ";
            }
            cout << "\n";
            continue;
        }
        cout << "YES\n";
        if (n % 2) {
            cout << 1 + (n - 3) / 2 << "\n";
            cout << "3 ";
            for (int i = 0; i < (n - 3) / 2; ++i) {
                cout << "2 ";
            }
            cout << "\n";
        } else {
            cout << n / 2 << "\n";
            for (int i = 0; i < n / 2; ++i) {
                cout << "2 ";
            }
            cout << "\n";
        }

    }

}
