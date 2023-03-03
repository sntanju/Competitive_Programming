#include <iostream>

using namespace std;

int main() {

    int numbers;
    cin >> numbers;

    for(int i = 1; i <= numbers; i++) {
        if(i%2 != 0) {
            cout << "I hate that";
        }
    }

    return 0;
}


