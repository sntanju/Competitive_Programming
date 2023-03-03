#include <iostream>

using namespace std;

int main() {

    double note;
    cin >> note;
    cout << "NOTAS:" << endl;


    int hundred = note / 100;
    note = note - (hundred*100);
    cout << hundred << " nota(s) de R$ 100.00" << endl;


    // Notes
    int fifty = note / 50;
    note = note - (fifty*50);
    cout << fifty << " nota(s) de R$ 50.00" << endl;

    int twenty = note / 20;
    note = note - (twenty*20);
    cout << twenty << " nota(s) de R$ 20.00" << endl;

    int ten = note / 10;
    note = note - (ten*10);
    cout << ten << " nota(s) de R$ 10.00" << endl;

    int five = note / 5;
    note = note - (five*5);
    cout << five << " nota(s) de R$ 5.00" << endl;

    int two = note / 2;
    note = note - (two*2);
    cout << two << " nota(s) de R$ 2.00" << endl;

    // Coins

    cout << "MOEDAS:" << endl;

    int one = note / 1.00;
    note = note - (one*1.00);
    cout << one << " moeda(s) de R$ 1.00" << endl;

    int coinFifty = note / 50.00;
    note = note - (coinFifty*50.00);
    cout << coinFifty << " moeda(s) de R$ 0.50" << endl;

    int cointwentyFive = note / 25.00;
    note = note - (cointwentyFive*25.00);
    cout << cointwentyFive << " moeda(s) de R$ 0.25" << endl;

    int coinTen = note / 10.00;
    note = note - (coinTen*10.00);
    cout << coinTen << " moeda(s) de R$ 0.10" << endl;

    int coinFive = note / 5.00;
    note = note - (coinFive*5.00);
    cout << coinFive << " moeda(s) de R$ 0.05" << endl;

    int coinOne = note / 1.00;
    note = note - (coinFifty*1.00);
    cout << coinFifty << " moeda(s) de R$ 0.01" << endl;

    return 0;
}

