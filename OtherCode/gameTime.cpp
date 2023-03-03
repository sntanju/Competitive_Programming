#include <iostream>

using namespace std;

int main() {

    int startingTime, endingTime, answer;
    cin >> startingTime >> endingTime;

    if( startingTime == endingTime ) {
        answer = 24;
        cout << "O JOGO DUROU " << answer << " HORA(S)" << endl;
    }

    else if( startingTime > endingTime) {
        answer = 24 - (startingTime - endingTime);
        cout << "O JOGO DUROU " << answer << " HORA(S)" << endl;
    }
    else if( startingTime < endingTime) {
        answer = (endingTime - startingTime);
        cout << "O JOGO DUROU " << answer << " HORA(S)" << endl;
    }

    return 0;
}
