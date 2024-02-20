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

ll calculate(ll n, ll ara[])
{
    if (n < 10)
        return (n * (n + 1) / 2);

    ll a = (ll)(log10(n));
    ll b = (ll)(ceil(pow(10, a)));
    ll c = n / b;

    return (c * ara[a] + (c * (c - 1) / 2) * b + c * (1 + n % b) + calculate(n % b, ara));
}


ll ans(ll n)
{
    ll a = (ll)(log10(n));
    ll ara[a + 1];
    ara[0] = 0; ara[1] = 45;

    for(ll i = 2; i <= a; i++)
        ara[i] = ara[i - 1] * 10 + 45 * (ll)(ceil(pow(10, i - 1)));

    return calculate(n, ara);

}


int main()
{
    optimize();

    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        cout << ans(n) << endl;
    }



    return 0;
}
