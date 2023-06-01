#include <bits/stdc++.h>
using namespace std;

int main() {

	long long t;
	cin >> t;
	while(t--){

	    long a, b;
	    cin >> a >> b;

	    long long  sum=0, num=0;
	    vector<long long> v;

	    for(long long i=0; i < a; i++){
	        long long c;
	        cin >> c;
	        v.push_back(c);
	    }

	    for(long long j=0; j < a; j++){
            sum= sum+ (5000-v[j]);
	        num++;

	        if(sum >= b){
                cout << num << endl;
	            sum=0,num=0;
	            break;
	        }

	        if( j== a-1 && sum < b){
                cout << -1 << endl;
                sum=0;
                num=0;
	        }
	    }


	}

	return 0;
}
//https://www.codechef.com/CDLS2023/problems/CDLS23A
