#include<bits/stdc++.h>
using namespace std;

int main() {

    double X,Y;
    cin >> X >> Y;

    if(X + Y == 0) cout << "Origem" << endl;
    else if(X == 0) cout << "Eixo Y" << endl;
    else if(Y == 0) cout << "Eixo X" << endl;
    else if(X > 0 && Y > 0 ) cout << "Q1" << endl;
    else if(X < 0 && Y > 0) cout << "Q2" << endl;
    else if(X < 0 && Y < 0) cout << "Q3" << endl;
    else if(X > 0 && Y < 0) cout << "Q4" << endl;

    return 0;
}



/*#include <iostream>

using namespace std;

int main() {

    double x, y;
    cin >> x >> y;



    if( x > 0.0 && y > 0.0 ) {
        cout << "Q1" << endl;
    }

    if( x < 0.0 && y > 0.0 ) {
        cout << "Q2" << endl;
    }

    if( x < 0.0 && y < 0.0 ) {
        cout << "Q3" << endl;
    }

    if( x < 0.0 && y < 0.0 ) {
        cout << "Q4" << endl;
    }

  /*  if(x == 0) {
        cout << "Eixo Y" << endl;
    }
    if(y == 0) {
        cout << "Eixo X" << endl;
    }

    if( x == 0 && y == 0 ){
        cout << "Origem" << endl;
    } */


  //  return 0;
//}
