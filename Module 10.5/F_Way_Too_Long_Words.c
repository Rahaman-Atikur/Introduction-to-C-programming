#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        char s[101];
        scanf("%s\n",s);
        int slen = strlen(s);
        if(slen<11)
        {
            printf("%s\n",s);
        }
        else
        {
            printf("%c%d%c\n",s[0],(slen-2),s[slen-1]);

        }
       
    }
    

    return 0;
}