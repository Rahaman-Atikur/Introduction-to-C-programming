#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a-b>=0)
    {
        int x = a-b;
        printf("%d",x);
    } 
    else
    {
        printf("0");
    }
    return 0;
}