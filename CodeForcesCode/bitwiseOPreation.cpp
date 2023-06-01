#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

	int num;
	cin >> num;
	vector<ll> v;

	for(ll i=0; i < num; i++){
		ll b;
		cin >> b;
		v.push_back(b);
	}

	ll t;
	cin >> t;

	while(t--){

		ll a;
		cin >> a;
		ll sum=0;

		for(ll i=0; i < num; i++){

			ll x = v[i]|a;
			ll y = v[i]+a;
			//cout << x << endl;
			//cout << y << endl;
			if(x==y)sum+=v[i];
			//cout << sum << endl;
		}
		cout << sum << endl;
	}
}
