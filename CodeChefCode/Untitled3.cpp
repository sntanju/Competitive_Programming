#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b, c, d;
	    cin  >> a >> b >> c >> d;
	    int x = a+b+c+d;

	    int m = max(a, max(b, max(c,d)));
	    int  y = x-m;
	    if(m>y) cout << "YES" << endl;
	    else cout << "NO" << endl;

	}
	return 0;
}
