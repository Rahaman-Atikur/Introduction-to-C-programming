#include<stdio.h>
void fun(int x)
{
    printf("Address of fun function x: %p\n",&x);
}
int main()
{
     int x;
     printf("Address of main function x: %p\n",&x);
     fun(x);
    return 0;
}