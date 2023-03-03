#include<bits/stdc++.h>
using namespace std;

int main()
{
   int test;
   cin >> test;

   vector<string> v;

   for(int i = 0; i < test; i++) {
    string input;
    cin >> input;
    v.push_back(input);
   }

   for(int j = v.size()-1; j >=0; j--) {
    cout << v[j] << endl;
   }
    return 0;
}


