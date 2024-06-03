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


#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007


signed main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    optimize();

    ll t;
    cin >> t;

    while(t--){

        ll n;
        cin >> n;

        ll cnt = 0;
        ll pos = 0;

        for(ll i = 31; i >= 0; i--){

           if(n & (1LL << i)){
                if(pos == 0) pos = i;
                if(cnt == 0 or cnt == 2) cnt++;
           }
           else if(cnt == 1) cnt = 2;
        }
        if(cnt != 3){
            cout << 0 << endl;
            continue;
        }

        ll curnum = 0;
        ll ans = 1e18;

        for(ll i = pos; i >= 0; i--){
            curnum = curnum + pow(2, i);

            if(curnum < n) continue;
            ans = min(ans, curnum - n);
        }
        cout << ans << endl;

    }

    return 0;
}


