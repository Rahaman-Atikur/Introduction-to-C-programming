#include<stdio.h>
void print_range(n)
{
   
    
         for(int i=-n;i<=n;i++)
    {
        printf("%d ",i);
    }
    

    
    }

int main()
{
    int n;
    scanf("%d",&n);
    print_range(n);
    return 0;
}