#include<stdio.h>
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
    int flag = 1;
    if(r!=c)
    {
        flag = 0;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
               if(a[i][j]!=a[0][0])
               {
                flag = 0;
               }

            }
            else if(a[i][j]!=0)
            {
                flag =0;
            }

           
        }
    }
    if(flag == 1)
    {
        printf("Scalar matrix\n");
    }
    else 
    {
        printf("Not Scalar");
    }
    return 0;
}