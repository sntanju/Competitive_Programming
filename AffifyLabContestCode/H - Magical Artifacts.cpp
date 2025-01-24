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

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        // Phase 1: Odd numbers first
        long long phase = 1;  // Current multiplier
        long long count = 0;

        while (true) {
            // Find how many multiples of 'phase' fit in the range [1, n]
            long long max_val = n / phase;
            long long num_elements = (max_val + 1) / 2;  // Odd multiples of 'phase'

            if (count + num_elements >= k) {
                // The k-th element is within this phase
                long long pos_in_phase = k - count;
                long long odd_number = 2 * pos_in_phase - 1; // Find the odd number for the position
                cout << odd_number * phase << endl;
                break;
            }

            count += num_elements;
            phase++;  // Move to the next phase (2, 3, 4, ...)
        }
    }



    return 0;
}
