#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    char s[10001];
    for(int i=0;i<T;i++)
    {
        
        scanf("%s",s);
    
    
    int l=0;
    int c=0;
    int d=0;
    for(int i=0;i<strlen(s);i++)
    {
        if((s[i]>='a') && (s[i]<='z'))
        {
            l++;
        }
        else if((s[i]>='A') && (s[i]<='Z'))
        {
            c++;
        }
        else if((s[i]>='0') && (s[i]<='9'))
        {
            d++;

        }
    }
    printf("%d %d %d\n",c,l,d);
    }
    
    return 0;
}