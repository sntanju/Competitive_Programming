#include<stdio.h>
int main()
{
   int ara[5] = {50, 60, 70, 80, 90};

    printf("Value of Array: %d %d %d %d %d\n", ara[0], ara[1], ara[2], ara[3], ara[4]);
    printf("Address of Array is %p\n", ara);

    printf("Address of Array[0] is %p\n", &ara[0]);
    printf("Address of Array[1] is %p\n", &ara[0]);
    printf("Address of Array[2] is %p\n", &ara[0]);
    printf("Address of Array[3] is %p\n", &ara[0]);
    printf("Address of Array[4] is %p\n", &ara[0]);

    return 0;
}
