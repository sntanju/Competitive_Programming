#include<stdio.h>

void bubble_sort(int ara[], int n)
{
    int i, j, temp;

    for(i = 0; i < n; i++){

        for(j = 0; j < n - i - 1; j++){
            if(ara[j] > ara[j + 1]){
                temp = ara[j];
                ara[j] = ara[j + 1];
                ara[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int ara[] = {4, 6, 9, 1, 10, 25, 20, 2, 0};
    int i,  n = sizeof(ara) / sizeof(ara[0]);

    bubble_sort(ara, n);
    printf("This array was sorted by using Bubble Sort Algorithm.\n");
    for(i = 0; i < n; i++) printf("%d\n", ara[i]);

    return 0;
}
