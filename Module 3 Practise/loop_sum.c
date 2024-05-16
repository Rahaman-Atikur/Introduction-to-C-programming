#include<stdio.h>
int main()
{
    int i;
    int n;
    scanf("%d", &n);
   long long  int sum=0;
    for(i=1;i<=n;i+=1)
    {
        sum=(sum+i);
         
    }
   printf("%lld \n",sum);
}