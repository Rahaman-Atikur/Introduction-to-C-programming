#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    int q=X/1000;
    if(q%2==0)
    {
        printf("EVEN");
    
    }
    else
    {
        printf("ODD");
    }

    return 0;
}