#include<stdio.h>
int main()
{
    long long int e,m,b;
    scanf("%lld %lld %lld",&e,&m,&b);
 
    if(e<=m && e<=b)
    {
        long long int x = e;
        //printf("%d",x);
       // long long int f = m-e;
        long long int j = b-e;
        if(e<j)
       // long long int k = x+j;
        printf("%lld",e);
        else
        {
            printf("lld",j);
        }
    } 
    else if(m<=e && m<=b)
    {
        long long int y = m;
       // printf("%d",y);
        long long int g = e-m;
        long long int h = b-m;
        long long int i = g/2;
        if(i<h)
        {
            long long int j = m + i;
            printf("%lld",j);
        }
        else
        {
            long long int k = m + h;
            printf("%lld",k);
        }
        
    }
    else
    {
        printf("%d",b);
        // long long int p = e-b;
        // long long int q = p/2;
        // long long int r = b + q;
        // printf("%lld",r);
    }
 
    return 0;
}