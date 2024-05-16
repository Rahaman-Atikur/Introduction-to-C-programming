#include<stdio.h>
#include<string.h>
int is_palindrome(char *s)
{
     int  len = strlen(s);
    int check = 0;
    for(int i=0;i<len;i++)
    {
        if(s[i]!=s[len-i-1])
        {
            check = 1;
            break;
        }
    }
    return check;

}

int main()
{
    char s[1001];
    
    scanf("%s",s);
    int check = is_palindrome(s);
  
    if(check==1)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }

    return 0;
}