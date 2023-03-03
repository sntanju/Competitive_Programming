#include <iostream>

using namespace std;

int main() {

    int note;
    cin >> note;
    cout << note << endl;


    int hundred = note / 100;
    note = note - (hundred*100);
    cout << hundred << " nota(s) de R$ 100,00" << endl;


    int fifty = note / 50;
    note = note - (fifty*50);
    cout << fifty << " nota(s) de R$ 50,00" << endl;

    int twenty = note / 20;
    note = note - (twenty*20);
    cout << twenty << " nota(s) de R$ 20,00" << endl;

    int ten = note / 10;
    note = note - (ten*10);
    cout << ten << " nota(s) de R$ 10,00" << endl;

    int five = note / 5;
    note = note - (five*5);
    cout << five << " nota(s) de R$ 5,00" << endl;

    int two = note / 2;
    note = note - (two*2);
    cout << two << " nota(s) de R$ 2,00" << endl;

    int one = note / 1;
    note = note - (one*1);
    cout << one << " nota(s) de R$ 1,00" << endl;


    return 0;
}
