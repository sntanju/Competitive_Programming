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

        string s;
        cin >> s;

        ll x = s[0] - '0', y = s[1] - '0';
        ll num = (x * 10) + y;


        if(s[0] == '0' && s[1] == '0') {
            cout << "12:" << s[3] << s[4] << " AM" << endl;
        }

        else if(num < 12) {
            cout << s << " AM" << endl;
        }

        else{

            num = num - 12;
            string temp = to_string(num);
           // cout << num << "    " << temp << endl;

            if((s[0] == '1' && s[1] == '2')) {
                 cout << "12:" << s[3] << s[4] << " PM" << endl;
            }

            else if(temp.size() == 2) {
                //s[0] == temp[0];
               // s[1] == temp[1];

               cout << temp << ":" << s[3] << s[4] << " PM" << endl;
            }
            else {
                //s[0] == '0';
                //s[1] == temp[0];

                cout << '0' << temp << ":" << s[3] << s[4] << " PM" << endl;
            }
           // cout << s << " PM" << endl;
        }

    }



    return 0;
}
