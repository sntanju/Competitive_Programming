#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a;
	    cin >> a;
	    int x = a/10;
	    if(a*10 == 0) cout << 100-a << endl;
	    else if(a%10 >= 5) cout << 100-(x+1)*10 << endl;
	    else cout << 100-(x*10) << endl;

	}
	return 0;
}
