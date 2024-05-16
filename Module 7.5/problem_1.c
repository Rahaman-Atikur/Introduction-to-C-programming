#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
  long long int sum =0;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        scanf("%lld\n",&arr[i]);
 
    } 
    for(int i =0;i<n;i++)
    {
       sum += arr[i];
 
    }
    if(sum<0)
    {
    sum *=-1;
    printf("%lld\n",sum);
 
    }
    else 
    {
        printf("%lld\n",sum);
 
    }
  
    return 0;
}