#include<stdio.h>
char small_to_capital()
{
    char n,r;
    scanf("%c",&n);
    if(n>='a' && n<='z')
    {
        r = (n-32);
    }
    return r;
}
int main()
{
    char rec = small_to_capital();
    printf("%c",rec);
     
    return 0;
}