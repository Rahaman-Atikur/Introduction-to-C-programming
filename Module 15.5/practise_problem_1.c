#include<stdio.h>
int my_abs(int n)
{
    int a = n * (-1);
    return a;
}
int main()
{
   int n;
   scanf("%d",&n);
   int a =  my_abs(n);
   printf("%d",a); 
    return 0;
}