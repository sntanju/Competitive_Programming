#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "Enter The Number Of Students: ";
    cin >> n;

    int students[n];

    for (int i = 0; i < n; i++){
        cout << "Marks For Student " << i+1 << " = " ;
        cin >> students[i];
        sum = sum + students[i];
    }

    cout << "Total Marks: " << sum << endl;
    float average = (float) sum / n;
    cout << "Average Marks: " << average << endl;

    int max = students[0];
    int min = students[0];

    for (int i = 1; i < n; i++) {
        if( students[i] > max ) {
            max = students[i];
        };
        if( students[i] < min ) {
            min = students[i];
        };
    };

    cout << "The Maximum Number Is " << max << endl;
    cout << "The Minimum Number Is " << min << endl;

    getch();
    return 0;
}
