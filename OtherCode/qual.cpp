#include<bits/stdc++.h>
using namespace std;

int main()
{

        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        int sum = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'o'){
                sum+=1;
                if(sum>b){
                    s[i] = 'x';
                }
            }
        }

       cout << s << endl;

    return 0;

}

