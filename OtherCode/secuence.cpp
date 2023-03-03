#include <iostream>

using namespace std;

int main() {

    int M, N;
    int sum = 0;

    while(1) {

        cin >> M >> N;

        if( M < 1 || N < 1) {
            return 0;
        }
        if( M < N ) {
            for ( int i = M; i <= N; i++) {
                sum = sum + i;
                cout << i;
                cout << " ";
            }
            cout << "Sum=" << sum << endl;
            sum = 0;
        }

        if( N < M ) {
            for ( int i = N; i <= M; i++) {
                sum = sum + i;
                cout << i;
                cout << " ";
            }
            cout << "Sum=" << sum << endl;
            sum = 0;
        }
    }

    return 0;
}

