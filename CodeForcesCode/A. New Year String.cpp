///   ***   ---            In the name of ALLAH        |||   ---   ***   ///
 
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <string>
#include <cstring>
#include <climits>
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
void faltu () { cerr << endl; }
template < typename T, typename ... hello> void faltu( T arg, const hello &... rest) { cerr << arg << ' '; faltu(rest...); }
 
ll gcd ( ll a, ll b ) { return std::gcd(a, b); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }
 
int main() {
    optimize();

    ll t;
    cin >> t;

    while(t--) {

    	ll n;
    	cin >> n;

    	string s;
    	cin >> s;

    	string x = "2026";
        string y = "2025";

		bool flag = s.find("2026") != string::npos;
		bool flag2 = s.find("2025") != string::npos;

		ll ans = INT_MAX;
		for(ll i = 0; i < s.size() - 3; i++) {
		    ll temp = 0;
		    for(ll j = 0; j < 4; j++) {
		        if (s[i + j] != x[j]) temp++;
		    }
		    ans = min(ans, temp);
		}
        
        ll temp = 0;
		for (ll i = 0; i < s.size() - 3; i++) {
		    if (s.substr(i, 4) == y) {
		        temp++;
		    }
		}

        ans = min(ans, temp);

		//if(flag == false) cout << 0 << endl;

		cout << ans << endl;
    }



    return 0;
}
    