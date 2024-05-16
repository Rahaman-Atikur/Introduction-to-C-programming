#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
    int n;
    scanf("%d",&n);
    char S[n+1];
    scanf("%s",S);
    int countT = 0;
    int countP = 0;
    for(int i=0;i<n;i++)
    {
        if(S[i]=='T')
        {
            countT++;
        }
        else if(S[i]=='P')
        {
            countP++;
        }
    }
    if(countT>countP)
    {
        printf("Tiger");
    }
    else if(countT<countP)
    {
        printf("Pathaan");
    }
    else if(countT==countP)
    {
        printf("Draw");
    }
    printf("\n");
    }
    return 0;
}