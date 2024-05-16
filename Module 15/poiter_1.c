#include<stdio.h>
int main()
{
    int x = 100;
    int *ptr = &x;
    x = 200;
    printf("X value : %d\n",x);
    printf("X value : %d\n",*ptr);
    return 0;
}