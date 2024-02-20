#include<stdio.h>

int binary_search(int ara[], int n, int x)
{
    int left, right, mid;
    left = 0;
    right = n - 1;

    while(left <= right){

        mid = left + (right - left) / 2;
        if(ara[mid] == x) return mid;

        else if(ara[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main()
{
    int ara[102];
    int n, x, i;
    scanf("%d %d", &n, &x);

    for(i = 0; i < 101; i++) ara[i] = i;
    int ans = binary_search(ara, n, x);

    if(ans == -1) printf("The number is not found.\n");
    else printf("The number is found.\n");

    return 0;
}
