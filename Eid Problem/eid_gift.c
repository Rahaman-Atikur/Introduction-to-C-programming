#include<stdio.h>
int main()
{
    int n,m,q,r;
    scanf("%d %d",&n,&m);

    q = n / m;
    r = n % m;
    printf("%d %d", q, r);

    return 0;
}