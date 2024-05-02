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

ll v[] = {
    1, 10, 11, 100, 101, 110, 111, 121, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111,
    1210, 1221, 1331, 10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 10201,
    11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111, 11121, 11211, 12100, 12111,
    12210, 12221, 12321, 13310, 13431, 14641, 100000
};

int main()
{
    optimize();
    /// START

    ll t;
    cin >> t;

    while(t--) {

        ll n;
        cin >> n;

        ll sz = sizeof(v) / sizeof(v[0]);
        bool flag = false;

        for (ll i = 0; i < sz; i++) {

            if (n == v[i]) {
                flag = true;
                break;
            }
        }

        if(flag == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

