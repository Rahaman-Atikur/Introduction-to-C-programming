#include<stdio.h>
long long int  fun(int a[],int n,int i)
{
    if(i==n) return 0;
    
   long long  int result = a[i] + fun(a,n,i+1);
    return result;  
    
     
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
   long long int result = fun(a,n,0);
   printf("%lld",result);
   
    return 0;
}