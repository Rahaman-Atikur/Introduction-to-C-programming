#include<stdio.h>
int main()
{
    long long int a;
    long long int b;
    double c;
    char d;
    scanf("%lld\n %lld\n %lf\n %c\n",&a,&b,&c,&d);
    printf("%lld\n",a);
    printf("%lld\n",b);
    printf("%0.2lf\n",c);
    printf("%c\n",d);
    return 0;
}