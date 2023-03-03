#include <iostream>

using namespace std;

int main() {


    int number;
    cin >> number;

    if(number == 0) {
        cout << "E" << endl;
    }

    else if(number >= 1 && number <= 35) {
        cout << "D" << endl;
    }

     else if(number >= 36 && number <= 60) {
        cout << "C" << endl;
    }

     else if(number >= 61 && number <= 85) {
        cout << "B" << endl;
    }

     else if(number >= 86 && number <= 100) {
        cout << "A" << endl;
    }


    return 0;
}
