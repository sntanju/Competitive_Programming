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
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;

        vector<ll> v(n), v2(n);
        vector<pair<ll, ll>> p;

        for(ll i = 0; i < n; i++)cin >> v[i];
        for(ll i = 0; i < n; i++)cin >> v2[i];

        for(ll i = 0; i < n; i++)p.push_back({v2[i], v[i]});
        sort(p.begin(), p.end());

        ll cnt = 1, sum=k;

        for(ll i = 0; cnt != n && i < n; i++){

            if(p[i].first >= k) break;
            else{
                ll temp = n - cnt;
                temp = min(temp, p[i].second);
                sum+=(temp*p[i].first);
                cnt+=temp;
            }
        }

        if(cnt < n) sum+=((n-cnt)*k);
        cout << sum << endl;

    }



    return 0;
}
