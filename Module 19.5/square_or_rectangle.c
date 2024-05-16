#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++)
    {

    int width,height;
    scanf("%d%d",&width,&height);
    if(height == width)
    {
        printf("Square\n");
    } 
    else
    {
        printf("Rectangle\n");
    }
    }
    return 0;
    
}