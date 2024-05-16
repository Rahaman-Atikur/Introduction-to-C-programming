#include<stdio.h>
int sum()             // No sending any value
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s = a + b;
    return s;           // Returning 
}
int main()
{
    int s = sum();         // No parameter
    printf("%d",s);
     
    return 0;
}