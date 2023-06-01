#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b;
	    cin >> a >> b;
	    int x = (a*10)/100;
	    int y= a-x;
	    if(y<b) cout << "ONLINE" << endl;
	    else if(y>b) cout << "DINING" << endl;
	    else cout << "EITHER" << endl;
	}
	return 0;
}
