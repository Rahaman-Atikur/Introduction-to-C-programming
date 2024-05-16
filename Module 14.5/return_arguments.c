#include<stdio.h>
int add_first_last_digit(int n)
{
    
    int firstDigit = n / 1000;
    int lastDigit = n % 10;
    int sum = firstDigit + lastDigit;
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int sum = add_first_last_digit(n);
    printf("%d",sum);
    return 0;
}