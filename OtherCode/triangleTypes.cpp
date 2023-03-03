#include <iostream>

using namespace std;

int main() {


    double a,b,c;

    cin >> a >> b >> c;

    if(a >= (b+c) || b >= (a+c) || c >= (a+b))
         cout << "NAO FORMA TRIANGULO"<<endl;
    else if(a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b))
           cout << "TRIANGULO RETANGULO"<<endl;
    else if(a*a > (b*b + c*c) || b*b > (a*a + c*c) || c*c > (a*a + b*b))
           cout << "TRIANGULO OBTUSANGULO"<<endl;
    else if(a*a < (b*b + c*c) || b*b < (a*a + c*c) || c*c < (a*a + b*b))
           cout << "TRIANGULO ACUTANGULO"<<endl;
    if(a == b && a == c)
            cout << "TRIANGULO EQUILATERO"<<endl;
    if((a == b && a != c)  || (a == c && a != b) || (b == c && b != a))
            cout << "TRIANGULO ISOSCELES"<<endl;



    /*

    double first, second, third;
    cin >> first >> second >> third;

    // sorting the numbers

     /*

     if( a > b && a > c) {
        first = a;
        if( b > c){
            second = b;
            third = c;
        }
        else{
            second = c;
            third = b;
        }
    }


    if( b > a && b > c) {
        first = b;
        if(a > c) {
            second = a;
            third = c;
        }
        else{
            second = c;
            third = a;
        }
    }

    if (c > a && c > b){
        first = c;
        if(a > b){
            second = a;
            third = b;
        }
        else {
            second = b;
            third = a;
        }
    }

    */



    /*
    if( first >= (second+third) || second >= (first+third) || third >= (first+second) ) {
        cout << "NAO FORMA TRIANGULO" << endl;
    }

    else if( first*first == (second*second+third*third) ) {
        cout << "TRIANGULO RETANGULO" << endl;
    }

    if( first*first > (second*second+third*third) ) {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }

    if( first*first < (second*second+third*third) ) {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }

    if( first == second && first == third ) {
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    if( first == second && first != third ) {
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    if( first == third && first != second ) {
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    if( third == second && third != first ) {
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    /*

    if(!first > second + third ) {
        cout << "NAO FORMA TRIANGULO" << endl;
    }

    if( first*first == second*second + third*third ) {
        cout << "TRIANGULO RETANGULO" << endl;
    }

    if( first*first > second*second + third*third ) {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }

    if( first*first < second*second + third*third ) {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }

    if( first == second && first == third ) {
        cout << "TRIANGULO EQUILATERO" << endl;
    }

    if(first == second && first != third  ) {
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    if(first == third && first != second  ) {
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    if(third == second && third != first  ) {
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    */


    return 0;
}
