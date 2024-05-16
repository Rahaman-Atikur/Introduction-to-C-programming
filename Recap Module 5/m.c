#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>=48 && a<=57)
    {
        printf("IS DIGIT");
    } 
    else if(a>=97 && a<=122)
    {
        printf("ALPHA\nIS SMALL");
    }
    else
    {
        printf("ALPHA\nIS CAPITAL");
    }
    return 0;
}