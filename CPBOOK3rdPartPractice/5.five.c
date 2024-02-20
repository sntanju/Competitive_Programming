#include<stdio.h>

void insertion_sort(int ara[], int n)
{
    int i, j, item;

    for(i = 1; i < n; i++){

        item = ara[i];
        j = i - 1;
        while(j >= 0 && ara[j] > item){
            ara[j + 1] = ara[j];
            j = j - 1;
        }
        ara[j + 1] = item;
    }
}

int main()
{
    int ara[] = {4, 6, 9, 1, 10, 25, 20, 2, 0};
    int i,  n = sizeof(ara) / sizeof(ara[0]);

    insertion_sort(ara, n);
    printf("This array was sorted by using Insertion Sort Algorithm.\n");
    for(i = 0; i < n; i++) printf("%d\n", ara[i]);

    return 0;
}
