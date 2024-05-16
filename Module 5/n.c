#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z')
    {
        int ans=a-32;
        printf("%c", ans);
    }
    else
    {
        int cap = a+32;
        printf("%c",cap);
    }

    return 0;
}