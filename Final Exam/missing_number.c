#include<stdio.h>
long long int find_number(long long int result, long long int numberOne,long long  int numberTwo,long long  int numberThree)
{
     long long int numberKey = numberOne*numberTwo*numberThree;

   long long int missingNember;

     if(result % numberKey != 0)
     {
        return -1;
     }
     else if(result%numberKey==0)
     {
        missingNember = result/numberKey;
        return missingNember;
     }
     return 0;

}
int main(void)
{
    int t;
    scanf("%d",&t);
    for( int k=0;k<t;k++)
    {
    
   long long int result;

    scanf("%lld",&result);

   long long int numberOne,numberTwo,numberThree;

    scanf("%lld%lld%lld",&numberOne,&numberTwo,&numberThree);
   long long int final = find_number(result,numberOne,numberTwo,numberThree);
    printf("%lld\n",final);
    }
    return 0;
}