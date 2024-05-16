#include<stdio.h>
#include <stdbool.h>
int main()
{
    long long int T;
    scanf("%lld",&T);

    for(int i=0;i<T;i++)
    {

  long long   int n;
    scanf("%lld",&n);
  long long  int a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    } 
   long long  int x;
    scanf("%lld",&x);
    long long int check=0;

    for(int i=0;i<n;i++)
    {
       if( a[i]==x)  
       { 
        check++;
    
       }
    }
    if(check>=1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    }
      return 0;
}