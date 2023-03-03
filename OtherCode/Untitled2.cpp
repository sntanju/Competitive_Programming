#include<bits/stdc++.h>
using namespace std;

#define ll long long

char FindMostFrequent(string source, string characters)
{
    map<char, int> m;
    for(int i=0; i<source.size(); i++){
        if(m[source[i]]) m[source[i]] = m[source[i]]+1;
        else m[source[i]]=1;
    }
    char ans;
    int cnt = 0;
    for(int i=0; i<characters.size(); i++){
        if(m[characters[i]]){
            if(m[characters[i]] > cnt){
                cnt = m[characters[i]];
                ans = characters[i];
            }
        }
    }

    return ans;
}

int main()
{
    cout << FindMostFrequent("Programming", "Pro");
    return 0;
}
