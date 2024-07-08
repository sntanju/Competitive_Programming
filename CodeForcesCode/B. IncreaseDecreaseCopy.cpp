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

        vector<ll> v(n), v2(n + 1);

        for(ll i = 0; i < n; i++) cin >> v[i];
        for(ll i = 0; i < n + 1; i++) cin >> v2[i];

        ll sum = 0;
        ll last = v2.back();

        bool flag = false;
        ll mx = INT_MAX;

        for(ll i = 0; i < n; i++){

            ll diff = abs(v[i] - v2[i]);
            sum += diff;

            if(v[i] <= last && last <= v2[i]) flag = true;
            if(v2[i] <= last && last <= v[i]) flag = true;

            mx = min(mx, abs(v[i] - last));
            mx = min(mx, abs(v2[i] - last));

        }

        if(flag) sum += 1;
        else sum += mx + 1;

        cout << sum << endl;
    }

    return 0;
}
