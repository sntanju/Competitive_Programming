#include<bits/stdc++.h>
using namespace std;

int main() {
    int numbers[] = { 2, 1, 0, 7, 10, 30, 50 }, n=7; //n for numbers array total elements
    int commulative_sum[n];
    commulative_sum[0] = numbers[0];
    for(int i=1; i<n; i++){
        commulative_sum[i] = commulative_sum[i-1]+numbers[i];
    }
    int query = 10;

    while (query-- > 0) {
        int index1, index2;
        cin >> index1 >> index2;
        int sum;
        if(index1==0) sum = commulative_sum[index2];
        else sum = commulative_sum[index2]-commulative_sum[index1-1];

        cout << "Sum between index " << index1 << " and index " << index2 << " is " << sum << endl;
    }
}
