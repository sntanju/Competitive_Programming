#include <iostream>

using namespace std;

int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d ;
    int difference = ((b*60)+ d) - ((a*60)+ c);
    if(difference<=0) difference += 24*60;

    int hours = difference/60;
    int minutes = difference%60;
    cout << "O JOGO DUROU " << hours << " HORA(S) E " << minutes << " MINUTO(S)" << endl;

    return 0;
}
