#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>1000)
    {
        printf("I will buy a panjabi\n");
        if(n>=1500)
        {
            printf("I will buy a shoe\n");
            printf("Alisa will buy a shoe\n");
        }
    }
    else
    {
        printf("Bad luck");
    }

    return 0;
}