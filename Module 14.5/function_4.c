#include<stdio.h>
void small_to_capital()     // No return 
{
    char n,r;
    scanf("%c",&n);
    if(n>='a' && n<='z')
    {
         r = (n-32);
    }
    printf("%c",r);
    return;
}
int main()
{
    small_to_capital();     // No parameter
     
    return 0;
}