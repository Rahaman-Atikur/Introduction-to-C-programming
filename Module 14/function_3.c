#include<stdio.h>
void sum(int x,int y)       //No return so void
{
    int s = x + y;
    printf("%d\n",s);
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    sum(x,y);               //calling with parameter
     
    return 0;
}