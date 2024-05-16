#include<stdio.h>
void small_to_capital(char n)   // No return Type
{
    char r;
    if(n>='a' && n<='z')
    {
        r = n-32;
        printf("%c",r);  
    }

}
int main()
{
     char n;
     scanf("%c",&n);
     small_to_capital(n);   // Calling function with parameter
    return 0;
}