#include<stdio.h>
int main()
{
    double x = 5.26;
    double *ptr = &x;       // Derefrencing 
    double *ptr2 = ptr;
    x = 10.20;
    printf("value of x is : %0.2lf\n",x); 
    printf("value of x is : %0.2lf\n",*ptr);    //accesesing the va;ue 
    printf("value of x is : %0.2lf\n",*ptr2);    //accesesing the va;ue 
        //Though double is 8 byte 
                                                 // but it is showing 4 cz 
                                                 // ptr size is four.
    return 0;
}