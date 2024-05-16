#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int line,s;
    line = (n+1)/2 + 5;
    s = n-1;
   int  k = 1;

    for(int i =0;i<line;i++)
    {

         for(int j=1;j<s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<k;j++)
        {
            printf("*");

        }
        s--;
        k = k+2;
        printf("\n");
    }
    return 0;
}