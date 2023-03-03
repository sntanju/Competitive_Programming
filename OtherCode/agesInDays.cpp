#include <iostream>

using namespace std;

int main() {

    int days;
    cin >> days;

    int years = days / 365;
    days = days - (years*365);
    cout << years << " ano(s)" << endl;

    int months = days / 30;
    days = days - (months*30);
    cout << months << " mes(es)" << endl;

    cout << days << " dia(s)" << endl;


    return 0;
}

