#include<stdio.h>
int main()
{
    double pi = 3.14159265358;
    int *ptr;
    ptr = &pi;

    printf("Value of pi:  %lf\n", pi);
    printf("Value of pi:  %lf\n", *ptr);

    printf("Adress of pi:  %p\n", &pi);
    printf("Adress of ptr:  %p\n", ptr);

    return 0;
}

