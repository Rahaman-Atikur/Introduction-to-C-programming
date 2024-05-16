#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int line,s,k;
    
    line = (n+1)/2 + 5;
    k = 1;
    s = line-1;
    for(int i=0;i<line;i++)
    {
        
        for(int j=0;j<s;j++)
        {
            printf(" ");
        }
        for(int j=0;j<k;j++)
        {
            printf("*");
        }
        
        s--;
        k = k+2;
        printf("\n");
        
        
    }
    s = ((line*2)-1-n)/2;
    k = n;

    for(int i=1;i<=5;i++)
    {
        for(int j=0;j<s;j++)
        {
            printf(" ");
        }
        for(int j =0;j<k;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}