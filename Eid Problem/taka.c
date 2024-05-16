#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d", &x,&y);
    int k = x-y;
    int m = k/2; // rinas
    int n = x-m; // minas

    printf("%d %d",n,m);
    return 0; 
   
}