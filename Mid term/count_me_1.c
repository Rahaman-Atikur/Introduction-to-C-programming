#include<stdio.h>
int main()
{
   long long  int n;
    scanf("%lld",&n);
  long long   int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
  long long   int two=0;
   long long  int three=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            two++;
        }
        else if(a[i]%3==0)
        {
            three++;
        }
        else if(a[i]%2==0 && a[i]%3==0)
        {
            two++;
        }
    }
    printf("%lld %lld",two,three);
    return 0;
}