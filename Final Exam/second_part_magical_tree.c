#include<stdio.h>
int main()
{
    int n;
    int k =6;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<k;j++)
        {
            printf("*");
            printf("\n");
        }
        k--;
    } 
    return 0;
}