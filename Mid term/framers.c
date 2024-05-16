#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {


    int M1;
    scanf("%d",&M1);

    int M2;
    scanf("%d",&M2);
    int D;
    scanf("%d",&D);
    
    int total_farmers=M1+M2;
    int t_F_w_d=(M1*D);
    int new_days= (t_F_w_d/total_farmers);
    int few_days= D-new_days;

    printf("%d\n",few_days);

    }

    return 0;
}