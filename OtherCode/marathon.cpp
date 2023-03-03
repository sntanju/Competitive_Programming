#include<iostream>
using namespace std;

int main()
{
    int test, timur, person2, person3, person4;
    int sum = 0;
    cin >> test;

    for(int i = 0; i < test; i++) {
        cin >> timur >> person2 >> person3 >> person4;
        if(person2 > timur){
            sum = sum+1;
        }
        if(person3 > timur){
            sum = sum+1;
        }
        if(person4 > timur){
            sum = sum+1;
        }

        cout << sum << endl;
        sum = 0;

    }
    return 0;

}
