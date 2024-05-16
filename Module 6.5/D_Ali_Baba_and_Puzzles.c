#include<stdio.h>
int main()
{
    int a,b,c;
    long long int d;
    scanf("%d %d %d ",&a,&b,&c);
    scanf("%lld",&d);
    long long int e = a+(b*c);
    long long int f = a-(b*c);
    long long int g =( a+b)-c;
    long long int h =( a-b)+c;
    long long int i =(a*b) + c;
    long long int j = (a*b)-c;

    if(e==d)
    {
        printf("YES");
    }
    else if(f==d)
    {
        printf("YES");
    }
    else if(g==d)
    {
        printf("YES");
    }
    else if(h==d)
    {
        printf("YES");
    }
    else if(i==d)
    {
        printf("YES");
    }
    else if(j==d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}