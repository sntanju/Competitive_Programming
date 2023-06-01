#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {

	ll t;
	cin >> t;
	while(t--){

        // Take three vector
	    vector<ll> v;
	    vector<ll> x;
	    vector<ll> y;
	    ll a;
	    cin >> a;

	    // initialize first vector
	    for(ll i=0; i < a; i++){
	        ll b;
	        cin >> b;
	        v.push_back(b);

	    }

        // initialize second vector
	    for(ll i=1; i<= a; i++){
	        x.push_back(i*2);
	    }

	    // initialize third vector
	    for(ll i=0; i< a; i++){
	        y.push_back( v[i]* x[i]);
	    }

	    // count the positive and negative number
	    ll pos=0, neg = 0, sum=0,sum1=0, sum2 =0,ans = 0;

	    for(ll i=0; i < a; i++){
	        if(y[i] > 0) pos++;
	        if(y[i] < 0) neg++;
	    }

        // get the number of subarray
	    for(ll i=1; i<=a; i++){
	        sum+=i;
	    }

	    for(ll i=1; i<=pos; i++){
	        sum1+=i;
	    }
	    for(ll i=1; i<= neg; i++){
	        sum2+=i;
	    }

	    /// calculate

	    ll k = sum1+sum2;
	    ll p = sum-k;

	    if(sum1 == sum2) ans = sum-k;
	    else if(sum1 > sum2) ans = sum - (sum2+p);
	    else if(sum2 > sum1) ans = sum - (sum1+p);



	    cout << ans << endl;
	}
	return 0;
}
