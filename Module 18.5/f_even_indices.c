#include<stdio.h>
void fun(long long int a[],long long int n,long long int i)
{
    if(i<0)  return;
    if(i%2==0)
        {
            printf("%lld ",a[i]);
        }
        fun(a,n,i-1);
}
int main()
{
 long long  int n,i;
    scanf("%lld",&n);
    i = n-1;
   long long  int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    } 
    fun(a,n,i);
    return 0;
}