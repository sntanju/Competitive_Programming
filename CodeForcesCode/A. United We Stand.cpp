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

    ll t;
    cin >>  t;

    while(t--){
        ll a;
        cin >> a;

        vector<ll> v1;
        vector<ll> v2;
        vector<ll> v3;

        for(ll i=0; i < a; i++){
            ll b;
            cin>> b;
            v1.push_back(b);
        }

        vector<ll> temp = v1;
        sort(temp.begin(), temp.end());
        temp.erase(unique(temp.begin(), temp.end()), temp.end());

        if( a == 1) cout << -1 << endl;
        else if(temp.size() == 1 ) cout << -1 << endl;
        else{
            sort(v1.begin(), v1.end());
           // cout << 1 << " " << a-1 << endl;

            ll cnt = 0;
            ll j = 0;
            while(v1[j] == v1[j+1]){
                //cout << v1[j] << " ";
                v2.push_back(v1[j]);
                cnt++;
                j++;

            }
            //cout << v1[j] << endl;
            v2.push_back(v1[j]);

            for( ll i = j+1; i < a; i++){
                    v3.push_back(v1[i]);
                //if(i== a-1) cout << v1[i] << endl;
                //else cout << v1[i] << " ";
            }

            cout << v2.size() << " " << v3.size() << endl;
            for(ll i=0; i < v2.size(); i++){
                if(i == v2.size()-1) cout << v2[i] << endl;
                else cout << v2[i]<< " " ;
            }
             for(ll i=0; i < v3.size(); i++){
                if(i == v3.size()-1) cout << v3[i] << endl;
                else cout << v3[i] << " " ;
            }
        }
    }



    return 0;
}
