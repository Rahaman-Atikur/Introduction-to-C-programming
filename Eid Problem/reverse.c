#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int Q,R;
    Q = N / 10;
    R = N % 10;
    int Q1 = Q/10;
    int R1 = Q % 10;

    int Q2 = Q1/10;
    int R2 = Q1 % 10;
    int R3 = Q2 % 10;
    

    printf("%d%d%d%d",R,R1,R2,R3);
    

    
    return 0;
}