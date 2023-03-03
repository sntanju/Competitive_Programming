#include<iostream>
using namespace std;

int main()
{
    int cases, sum1=0, sum2=0;
    string input;

    cin >> cases;

    for(int i = 0; i < cases; i++) {
        cin >> input;
        if(input == "For") {
            sum1+=1;
        }
        else{
            sum2+=1;
        }
    }

    if(sum1 > sum2) {
        cout << "Yes" << endl;
    }
    else{
        cout << "No" <<endl;
    }
    return 0;
}
