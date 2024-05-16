#include<stdio.h>
void fun(int *p)
{
    *p = 500;    // dereferencing means accessing value 
}
int main()
{
    int x = 100;
    fun(&x); 
    printf(" value of x is :%d",x);
    return 0;
}