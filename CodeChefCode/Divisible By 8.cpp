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
        ll n, num = 0;
        string s;
        cin >> n >> s;

        char c1, c2, c3;
        if(n == 1){
            cout << "8" << endl;
            continue;
        }

        else if(n == 2){
            c2 = s[s.size()-2], c3 = s[s.size()-1];
            num = (c2-'0') * 10 + (c3-'0');
        }

        else if(n >= 3){

         c1 = s[s.size()-3], c2 = s[s.size()-2], c3 = s[s.size()-1];
         num = ((c1-'0') * 100) + ((c2-'0') * 10) + (c3-'0');
        }

        if(num % 8 == 0) {
            cout << s << endl;
            continue;
        }

         else {
            ll mod = num % 8;
            ll x = 8 - x;
            ll y = num % 10;
            ll z = x + y;

            ll ans = 0;
            if( z < 10){
                //ans = z;
                num += x;
            }
            else{
                //ans = y - mod;
                num -= mod;
            }
            num %= 10;
            string str = to_string(num);
            s[s.size()-1] = str[0];

            cout << s << endl;
        }

        /*
       else
        {
            ll mod = 8 - (num % 8);
            if(mod + (s[n - 1] - '0') < 10){
                num += mod;
            }
            else{
                num -= (num % 8);
            }
        }
        if(n>2){
            s[n - 3] = (num / 100) % 10 + '0';
        }
        s[n-2] = (num / 10) % 10 + '0';
        s[n-1] = (num % 10) + '0';
        cout << s <<endl;
        */

    }

    return 0;
}
