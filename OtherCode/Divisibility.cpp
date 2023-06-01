#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
	ll num;
	cin >> num;
	vector<int> v;

	for(ll i=0; i < num; i++){
		ll b;
		cin >> b;

		ll x = b%10;
		v.push_back(x);
	}

	ll num1 = v[v.size()-1];
	ll num2 = 1;

	for(ll i=v.size()-1; i >= 0; i--){
        if(i== v.size()-1) num1 = num1;
        else{
            num1+= num1*num2;
        }

		num2*=10;
	}

	if(num1%10 ==0) cout << "Yes" << endl;
	else cout << "No" << endl;
}
