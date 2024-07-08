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

        ll arr[n][m];
        for(ll i = 0; i < n; i++) {

            for(ll j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }

        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < m; j++) {

               ll x = 0, y = 1;

               if((i - 1) >= 0) x = max(x, arr[i - 1][j]);
               if((j - 1) >= 0) x = max(x, arr[i][j - 1]);

               if((i + 1) < n) x = max(x, arr[i + 1][j]);
               if((j + 1) < m) x = max(x, arr[i][j + 1]);


               if((i - 1) >= 0 && arr[i][j] <= arr[i - 1][j]) y = 0;
               if((j - 1) >= 0 && arr[i][j] <= arr[i][j - 1]) y = 0;
               if((i + 1) < n && arr[i][j] <= arr[i + 1][j]) y = 0;
               if((j + 1) < m && arr[i][j] <= arr[i][j + 1]) y = 0;

               if(y == 0) arr[i][j] = x;
            }
        }

        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < m; j++)cout << arr[i][j] << " ";
            cout << endl;
        }

    }

    return 0;
}
