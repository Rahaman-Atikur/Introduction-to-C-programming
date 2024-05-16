#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if(a>='a' && a<='z')
    {
        int ans=a-32;
        printf("%c",ans);
    }
    else if(a>='A'&& a<='Z')
    {
        int ans=a+32;
        printf("%c",ans);
    }
    return 0;
}