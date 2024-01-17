#include<stdio.h>

void recurse()
{
    char *s = "Hurrey, I am learning Recursion!";
    printf("%s\n", s);
    recurse();
}

int main()
{
    recurse();
    return 0;
}

