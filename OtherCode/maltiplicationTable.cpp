#include <iostream>

using namespace std;

int main() {

   int number;
   cin >> number;

   for ( int i = 1; i <= 10; i++ ) {
    cout << i << " X " << number << " = " << i * number << endl;
   }

    return 0;
}
