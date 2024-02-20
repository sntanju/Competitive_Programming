#include<stdio.h>

void selection_sort(int ara[], int n)
{
    int i, j, index_min, temp;

    for(i = 0; i < n - 1; i++){

        index_min = i;
        for(j = i + 1; j < n; j++){
            if(ara[j] < ara[index_min]){
                index_min = j;
            }
        }
        if(index_min != i){
            temp = ara[i];
            ara[i] = ara[index_min];
            ara[index_min] = temp;
        }
    }
}

int main()
{
    int ara[] = {4, 6, 9, 1, 10, 25, 20, 2, 0};
    int i,  n = sizeof(ara) / sizeof(ara[0]);

    selection_sort(ara, n);
    printf("This array was sorted by using Selection Sort Algorithm.\n");
    for(i = 0; i < n; i++) printf("%d\n", ara[i]);

    return 0;
}
