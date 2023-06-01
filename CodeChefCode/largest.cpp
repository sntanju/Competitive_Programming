#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll t;
	cin >> t;
	while(t--){
	    ll a;
	    cin >> a;
	    vector<ll> v;
	    for(ll i=0; i < a; i++){
	        ll b;
	        cin >> b;
	        v.push_back(b);
	    }

	    sort( v.begin(), v.end() );
        v.erase( unique( v.begin(), v.end() ), v.end() );
        cout << v[v.size()-1]+ v[v.size()-2] << endl;
	}
	return 0;
}



