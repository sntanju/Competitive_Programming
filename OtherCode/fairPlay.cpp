#include<iostream>
using namespace std;

int main()
{
    int test, a,b,c,d,first,second, third, fourth;
    cin >> test;

    for(int i = 0; i < test; i++) {
        cin >> a >> b >> c >> d;
        if(a>b) {
            first = a;
            third = b;
        }
        else{
            first = b;
            third = a;
        }

        if(c>d) {
            second = c;
            fourth = d;
        }
        else{
            second = d;
            fourth = c;
        }

        if(first > second) {
            if(second > third) {
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }

        if(second > first) {
            if(first > fourth) {
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
