#include<stdio.h>
char small_to_capital(char n)       // reurn + parameter
{
    char r;
    if(n>='a' && n<='z')
    {
        r = n-32;
    }
    return r;
}
int main()
{
    char n;
    scanf("%c",&n);
    char cap = small_to_capital(n);   // parameter passing
    printf("%c",cap);
     
    return 0;
}