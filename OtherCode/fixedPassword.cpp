#include <iostream>

using namespace std;

int main() {

    int number;
    int password = 2002;


    while(1) {

        cin >> number;

        if( number == password ) {
            cout << "Acesso Permitido" << endl;
            return 0;
        }

        else {
            cout << "Senha Invalida" << endl;
        }
    }

    return 0;
}

