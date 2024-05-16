#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char ar[n];
    //int l = strlen(ar);
    for(int i=0;i<=n;i++)
    {
        scanf("%c",&ar[i]);
    } 
    int sum =0;
    for(int i=0;i<=n;i++)
    {
        if(ar[i]>='0' && ar[i]<='9')
        {
            sum = sum + (ar[i]-48);
        }
        
        
       
    }
     printf("%d",sum);
    
    
    return 0;
}