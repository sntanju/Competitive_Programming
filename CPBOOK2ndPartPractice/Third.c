#include<stdio.h>
int main()
{
    char ch1 = 'A', ch2 = 'B';
    int n1 = 100, n2 = 100000;

    printf("Value of ch1 = %c,\t", ch1);
    printf("Address of ch1 = %p,\t", &ch1);

    printf("Value of ch2 = %c,\t", ch2);
    printf("Address of ch2 = %p,\t", &ch2);

    printf("Value of n1 = %d,\t", n1);
    printf("Address of n1 = %p,\t", &n1);

    printf("Value of n2 = %d,\t", n2);
    printf("Address of n2 = %p,\t", &n2);


    return 0;
}
