#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {

	ll num;
	cin >> num;

	while(num--){
		ll a;
		cin >> a;
		vector<ll> v;

		for(ll i=0; i < a; i++){
			ll b;
			cin >> b;
			v.push_back(b);
		}
		//

		ll ans=0;
		for(ll i=0; i < a; i++){

			if(v[i]%2 != 0)ans++;
		}

		ll ans2 = 0;
		if(ans < 1) ans2=0;
		else if(ans == 3) ans2 =1;
		else if(ans>3) ans2 = (ans-3)+1;
		cout << ans2 << endl;

	}

}
