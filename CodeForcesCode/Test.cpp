#include <iostream>
using namespace std;
#define ll long long

int main() {
	ll t;
	cin >> t;

	while(t--){

        string a;
        cin >> a;

        if(a.size() == 1) cout << a << endl;

        else {

        ll x = a[(a.size()-1)]-'0';
        ll y = a[(a.size()-2)]-'0';

        ll num = (y*10)+x;
        ll ans = num %20;
        cout << ans << endl;
        }

	}
	return 0;
}
