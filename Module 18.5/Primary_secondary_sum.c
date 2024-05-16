#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    } 
    int primarySum = 0;
    int secondarySum = 0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                primarySum += a[i][j];
            }
            else if(i+j==r-1)
            {
                secondarySum += a[i][j];
            }

        }
    }
    int difference = primarySum - secondarySum;
    int result = abs(difference);
    
    printf("%d",result);
    return 0;
}