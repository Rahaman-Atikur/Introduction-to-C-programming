#include<stdio.h>
int main()
{
    long long int  n,m,k;

    scanf("%lld %lld %lld",&n,&m,&k);
    

    
    
    long long int x = (n-m);
    long long int y = k-m;
    long long int z = x/2;
    long long int l = z + m;
    if(y<z)
    {
      long long int   l= y + m;
    }
    else
    {
      long long int   l = z + m;
    }
    printf("%lld",l);
    

   
    return 0;
}