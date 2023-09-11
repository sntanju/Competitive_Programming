#include<stdio.h>

int a[100001], frq[100001];

int main()
{

    int i, n;
    scanf("%d",&n);

    for( i=1; i<=4*n-1; i++)
    {
        scanf("%d",&a[i]);
    }

    for( i=1; i<=(4*n)-1; i++)
    {
        frq[a[i]]++;
    }


    for( i=1; i<=(4*n)-1; i++)
    {
        if( frq[a[i]] == 3 ) break;
    }
    printf("%d\n",a[i]);
}
