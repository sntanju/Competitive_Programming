#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

	ll a, b;
	cin >> a >> b;

	vector<ll> v;
	//vector<ll> v1;
	//vector<ll> v2;

	for(ll i=0; i < a; i++){
		ll c;
		cin >> c;

		v.push_back(c%b);
	}
	sort(v.begin(), v.end());
	cout << v[v.size()-1]-v[0];

	/*
	for(ll i=0; i < a; i++){
		v1.push_back(v[i]+b);
	}

	for(ll i=0; i < a; i++){

		if(v[i]- b >= 0) v2.push_back(v[i]-b);
		else v2.push_back(v[i]+b);
	}

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	ll x = v1[a-1]-v1[0];
	ll y = v2[a-1]-v2[0];
	cout << min(x,y) << endl;
	*/


	return 0;

}
