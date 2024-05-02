///   ***   ---   |         In the name of ALLAH        |||   ---   ***   ///



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
    ///Start

    ll t;
    cin >> t;

    while (t--) {

      ll n, m;
      cin >> n >> m;

      char s[n][m];
      for(ll i = 0; i < n; i++){

         for(ll j = 0; j < m; j++){
            cin >> s[i][j];
         }
      }

      if(s[0][0] == s[n-1][m-1]){
         cout << "YES" << endl;
         continue;
      }

      char c1 = s[n - 1][m - 1], c2 = s[0][0];
      ll f1 = 0, f2 = 0;

      for(ll i = 0; i < m; i++){
         if(s[0][i] == c1){

            f1++;
            break;
         }
      }

      for(ll i = 0; i < n; i++){
         if(s[i][0] == c1){

            f1++;
            break;
         }
      }

      for(ll i = 0; i < m; i++){
         if(s[n - 1][i] == c2){

            f2++;
            break;
         }
      }

      for(ll i = 0; i < n; i++){
         if(s[i][m - 1] == c2){

            f2++;
            break;
         }
      }

      if(f1 == 2 || f2 == 2){
         cout << "YES" << endl;
      }

      else cout << "NO" << endl;

    }

    return 0;
}
