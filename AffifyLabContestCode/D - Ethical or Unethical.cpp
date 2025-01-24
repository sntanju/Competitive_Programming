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

struct TrieNode {
    TrieNode* children[10];
    int count;

    TrieNode() {
        count = 0;
        for(int i = 0; i < 10; ++i) {
            children[i] = nullptr;
        }
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }


    void insert(const string& number) {
        TrieNode* current = root;
        for(char ch : number) {
            int digit = ch - '0';
            if(current->children[digit] == nullptr) {
                current->children[digit] = new TrieNode();
            }
            current = current->children[digit];
            current->count++;
        }
    }


    string findUniquePrefix(const string& number) {
        TrieNode* current = root;
        string prefix = "";
        for(char ch : number) {
            int digit = ch - '0';
            prefix += ch;
            current = current->children[digit];
            if(current->count == 1) {
                break;
            }
        }
        return prefix;
    }
};

int main() {

    optimize();
    /// START

    int n;
    cin >> n;
    vector<string> phoneNumbers(n);
    Trie trie;

    for(int i = 0; i < n; ++i) {
        cin >> phoneNumbers[i];
        trie.insert(phoneNumbers[i]);
    }

    for(int i = 0; i < n; ++i) {
        cout << trie.findUniquePrefix(phoneNumbers[i]) << endl;
    }

    return 0;
}
