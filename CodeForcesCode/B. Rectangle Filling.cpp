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
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}

ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }


int main()
{
    optimize();
    /// START

    ll t;
    cin >> t;

    while(t--) {

        ll n, m;
        cin >> n >> m;

        vector<string> v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];

        ll a = count(v[0].begin(), v[0].end(), 'W');

        ll b = count(v[n - 1].begin(), v[n - 1].end(), 'W');

        ll c = count(v[0].begin(), v[0].end(), 'B');

        ll d = count(v[n - 1].begin(), v[n - 1].end(), 'B');

        if(n == 1 && m == 1) cout << "YES" << endl;
        else if(n == 1 && n != m) {
            //if(v[0][0] != v[0][m - 1]) cout << " NO" << endl;
            string s = v[0];
            //sort(s.begin(), s.end());
            //s.erase(unique(s.begin(), s.end()), s.end());
            if(s[0] == s[s.size() - 1]) cout << "YES" << endl;
            else cout << "NO" << endl;

        }
        else if(a > 0 && b > 0) cout << "YES" << endl;

        else if(c > 0 && d > 0) cout << "YES" << endl;
        else  cout << "NO" << endl;
    }



    return 0;
}
