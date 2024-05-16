#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int len = strlen(s);
    int i =0;
    int j = len-1;
    while(i<j)
    {
        int tmp = s[i];
        s[i] =s[j];
        s[j] = tmp;
        i++;
        j--;
    }
    
    return 0;
}