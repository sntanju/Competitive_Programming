#include<bits/stdc++.h>
using namespace std;

int main()
{
   int digits, number;

   cin >> digits;
   cin >> number;


   vector<int> x;


    for(int i=0; i< digits; i++)
    {
        x.push_back(number%10);

        number=number/10;
        cout << number <<endl;
    }
     reverse(x.begin(), x.end());
    for( int i = 0; i < digits; i++) {
        cout << x[i] << endl;
    }


    return 0;
}




