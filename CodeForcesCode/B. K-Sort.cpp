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

         ll n;
         cin >> n;

         vector<ll> v(n), v2;
         for(ll i = 0; i < n; i++) cin >> v[i];

         ll x = v[0];
         for(ll i = 0; i < n; i++){

           x = max(x, v[i]);
           if(x > v[i]) v2.push_back(x - v[i]);
         }

         if(v2.size() == 0) {

           cout << 0 << endl;
           continue;
         }

         sort(v2.begin(), v2.end());
         ll sum = v2[v2.size() - 1], y = 0;

         for(ll i = 0; i < v2.size(); i++) {
            ll temp = (v2[i] - y) * (v2.size() - i);

            sum +=temp;
            y = v2[i];
         }

        cout << sum << endl;
    }

    return 0;
}