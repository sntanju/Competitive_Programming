#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;

    for( int i = 1; i <= N; i++) {
        if(i == N) {
            cout << "Ho";
        }
            else{
                cout << "Ho ";
            }
    }
    cout << "!" << endl;

    return 0;
}

