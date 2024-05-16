#include<stdio.h>
#include<string.h>
void fun(char ar[])     // don't need to pass the size
{
    int s = strlen(ar);
    printf("%d",s);
}
int main()
{
    char ar[100] = "Hello";
    fun(ar);

     
    return 0;
}