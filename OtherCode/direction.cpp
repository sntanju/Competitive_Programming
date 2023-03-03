#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x=0, y=0;
    int test, numbers;

    string characters, a;
    cin >> test;

    for(int j = 0; j < test; j++) {

        cin >> numbers;
        cin >> characters;

        for(int i = 0; i < numbers; i++) {

            if( characters[i] == 'L' ) {
                x = x-1;

                if( x == 1 && y == 1 ) {
                   a = "YES";
                }
            }

            else if( characters[i] == 'R' ) {
                x = x+1;

                if( x == 1 && y == 1 ) {
                    a = "YES";
                }
            }

            else if( characters[i] == 'U' ) {
                y = y+1;

                if( x == 1 && y == 1 ) {
                    a = "YES";
                }
            }

            else if( characters[i] == 'D' ) {
                y = y-1;

                if( x == 1 && y == 1 ) {
                    a = "YES";
                }

            }
        }

        if( a=="YES" ) {
            cout << "YES" << endl;
                x = 0;
                y=0;
                a="";
        }
        else{
            cout << "NO" << endl;
                x = 0;
                y=0;
        }

    }


    return 0;
}

