#include <iostream>
using namespace std;

int main() {

	int t;
	cin >> t;

	while(t--){
	    int a,b;
	    cin >> a >> b;

	    if(a%b ==0) cout << a/b << endl;

	    else {
	        int x = a-((a/b)*b);
	        cout << (a/b)+x << endl;
	    }
	}
	return 0;
}
