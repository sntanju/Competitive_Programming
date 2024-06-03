///   ***   ---            In the name of ALLAH        |||   ---   ***   ///

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

ll gcd (ll a, ll b) { return __gcd(a, b); }
ll lcm (ll a, ll b) { return a * (b / gcd(a, b)); }

int main() {
    optimize();
    /// START

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> v(n);
        vector<ll> v2(n + 1);

        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (ll i = 0; i <= n; i++) {
            cin >> v2[i];
        }

        sort(v.begin(), v.end());
        sort(v2.begin(), v2.end());

        ll cnt = 0, i = 0, j = 0;

        while (i < v.size() && j < v2.size()) {
            if (v[i] > v2[j]) {
                cnt += (v[i] - v2[j]);
                j++;
            } else if (v[i] < v2[j]) {
                cnt += (v2[j] - v[i]);
                i++;
            } else {
                i++;
                j++;
            }
        }

        while (i < v.size()) {
            cnt += v[i];
            i++;
        }

        while (j < v2.size()) {
            cnt += v2[j];
            j++;
        }

        cout << cnt << endl;
    }

    return 0;
}

///  file:///F:/All%20Training%20Materials/(Exabyting)%20Important%20PDF%20and%20Other%20For%20Interview%20Preparation/Interview-prepration.pdf
