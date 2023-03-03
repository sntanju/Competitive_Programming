#include <iostream>

using namespace std;

int main() {

    int target;
    cin >> target;

    int answer = target/5;

    if(target %  5 == 0) {
        cout << answer << endl;
    }

    else{
        cout << answer+1 << endl;
    }

    return 0;
}

