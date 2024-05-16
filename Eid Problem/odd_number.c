#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int x1 = (n/4)-3;
    int x2 = x1 + 2;
    int x3 = x2 + 2;
    int x4 = x3 + 2;
    

    printf("%d %d %d %d",x1,x2,x3,x4);
    return 0;
}