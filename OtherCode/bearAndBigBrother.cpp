#include <iostream>

using namespace std;

int main() {

    int limak, bob;
    int answer = 1;
    cin >> limak >> bob;

   /* if(limak == bob) {
        cout << answer << endl;
    }*/

    while(limak*3 <= bob*2) {
        answer+=1;
        limak = limak*3;
        bob = bob*2;
    }

    cout << answer << endl;


    return 0;
}


