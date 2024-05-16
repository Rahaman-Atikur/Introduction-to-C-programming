#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a==20000)
    {
        printf("Gucci Bag");
    }
    else if(a>2000)
    {
        printf("Gucci Bag\nGucci belt");
    }
    else if(a>=5000)
    {
        printf("Levis");
    }


    // if(a==5000)
    // {
    //     printf("Levis");
    // }
    //  else if(a==10000 || a>20000)
    // {
    //    printf("Gucci bag");
    //     if(a>20000)
    //     {
    //         printf("Gucci belt & bag");
    //     }
    //     printf("Gucci");
    // }
    else if(1<a<4999)
    {
        printf("something");
    }
    

    return 0;
}