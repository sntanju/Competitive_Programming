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
    int T;
    cin >> T;

    while (T--) {
         int D, X, Y;
        cin >> D >> X >> Y;

        vector<pair<int, int>> dishes(D); // Store pairs of (Fᵢ, Pᵢ)

        for (int i = 0; i < D; i++) {
            cin >> dishes[i].first >> dishes[i].second;
        }

        // Sort dishes by Fᵢ in descending order for adults
        sort(dishes.begin(), dishes.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return a.first > b.first; // Sort by Fᵢ for adults
        });

        long long adult_happiness = 0;
        for (int i = 0; i < X; i++) {
            adult_happiness += dishes[i].first; // Assign the best X dishes to adults
        }

        // Now sort the remaining dishes by Pᵢ in descending order for kids
        sort(dishes.begin(), dishes.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return a.second > b.second; // Sort by Pᵢ for kids
        });

        long long kid_happiness = 0;
        for (int i = 0; i < Y; i++) {
            kid_happiness += dishes[i].second; // Assign the best Y dishes to kids
        }

        // Output the total happiness for this test case
        cout << adult_happiness + kid_happiness << "\n";
    }



    return 0;
}
