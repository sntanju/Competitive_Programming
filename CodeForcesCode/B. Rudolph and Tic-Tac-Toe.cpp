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
    while(t--){
        string a, b, c;
        cin  >> a;
        cin >> b;
        cin >> c;

        vector<char> v = {'X', 'O', '+'};
        char check = '?';

        for(char x : v){
            if(a[0] == x && a[1] == x && a[2] == x) check = x;
            if(b[0] == x && b[1] == x && b[2] == x) check = x;
            if(c[0] == x && c[1] == x && c[2] == x) check = x;


            if(a[0] == x && b[0] == x && c[0] == x) check = x;
            if(a[1] == x && b[1] == x && c[1] == x) check = x;
            if(a[2] == x && b[2] == x && c[2] == x) check = x;


            if(a[0] == x && b[1] == x && c[2] == x) check = x;
            if(a[2] == x && b[1] == x && c[0] == x) check = x;

        }

        if(check == '?') cout << "DRAW" << endl;
        else cout << check << endl;

    }

    return 0;
}
