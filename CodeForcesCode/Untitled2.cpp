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

    ll t, i = 1;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        string ans;
        ans += s[0];

        /*
        if(s[0] != '0' && s[1] != '0'){
            s.erase(0, 1);
            cout << ans << " " << s << endl;
        }
        else {
            */
           for(i = 1; i < s.size(); i++){
                if(s[i] == '0') {
                    ans+=s[i];
                }
                else break;
           }
           s.erase(0, i);
           if(s.size() > ans.size()) cout << ans << " " << s << endl;
           else{
            if(s.size() == ans.size()){
                bool flag = false;
                for(i = 0; i < s.size(); i++){
                    if(s[i]-'0' > ans[i]-'0'){
                        flag = true;
                        break;
                    }
                }

                if(flag == true)  cout << ans << " " << s << endl;
                else cout << -1 << endl;
            }
            else cout << -1 << endl;
           }

        //}
    }



    return 0;
}
