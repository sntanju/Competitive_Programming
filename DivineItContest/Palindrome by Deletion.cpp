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

        int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        string W;
        cin >> W;
        int n = W.size();
        vector<vector<long long>> dp(n, vector<long long>(n, 0));
        vector<vector<int>> nextPos(n, vector<int>(26, n));
        vector<vector<int>> prevPos(n, vector<int>(26, -1));

        for (int c = 0; c < 26; c++) {
            int last = n;
            for (int i = n - 1; i >= 0; i--) {
                nextPos[i][c] = last;
                if (W[i] - 'A' == c) last = i;
            }
        }

        for (int c = 0; c < 26; c++) {
            int last = -1;
            for (int i = 0; i < n; i++) {
                prevPos[i][c] = last;
                if (W[i] - 'A' == c) last = i;
            }
        }

        for (int i = 0; i < n; i++) dp[i][i] = 1;

        for (int len = 2; len <= n; len++) {
            for (int l = 0; l + len - 1 < n; l++) {
                int r = l + len - 1;
                if (W[l] == W[r]) {
                    int c = W[l] - 'A';
                    int nl = nextPos[l][c];
                    int pr = prevPos[r][c];
                    if (nl > pr) {
                        dp[l][r] = dp[l + 1][r - 1] * 2 + 2;
                    } else if (nl == pr) {
                        dp[l][r] = dp[l + 1][r - 1] * 2 + 1;
                    } else {
                        dp[l][r] = dp[l + 1][r - 1] * 2 - dp[nl + 1][pr - 1];
                    }
                } else {
                    dp[l][r] = dp[l + 1][r] + dp[l][r - 1] - dp[l + 1][r - 1];
                }
            }
        }

        long long ways_cntx = dp[0][n - 1];
        cout << "Case " << tc << ": " << ways_cntx << '\n';
    }



    return 0;
}
    