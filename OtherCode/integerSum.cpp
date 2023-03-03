#include<bits/stdc++.h>
using namespace std;

int main()
{
   int test, sum=0;
   cin >> test;

   vector<int> v;

   for(int i = 0; i < test; i++) {
    int input;
    cin >> input;
    v.push_back(input);
   }

   for(int j = 0; j < v.size(); j++) {
    sum += v[j];
   }

   cout << sum << endl;
    return 0;
}



