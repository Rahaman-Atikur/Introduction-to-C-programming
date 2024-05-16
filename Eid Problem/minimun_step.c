#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%3==0)
    {
        int s=x/3;
        printf("%d",s);
    } 
    else
    {
        int s = (x/3) + 1;
        printf("%d",s);
    }

    return 0;
}