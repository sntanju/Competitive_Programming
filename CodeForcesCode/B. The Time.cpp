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

    string s;
    cin >> s;
    ll n;
    cin >> n;

    string a, b;
    ll h = 0, m = 0;

    h = ((s[0] - '0') * 10) + (s[1] - '0');
    m = ((s[3] - '0') * 10) + (s[4] - '0');

    m += n;;
    ll h2 = m / 60;
    m %= 60;

    h+=h2;

    h%= 24;

    string hh = to_string(h);
    if(h == 24) hh = "00";

    else{
        if(hh.size() == 1){
            hh+='0';
            reverse(hh.begin(), hh.end());
        }
    }

    string mm = to_string(m);

    if(mm.size() == 1){
        mm+='0';
        reverse(mm.begin(), mm.end());
    }

    cout << hh << ':' << mm << endl;



    return 0;
}
