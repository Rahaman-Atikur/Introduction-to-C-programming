#include<stdio.h>
void MaxMin(int n)
{
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
    int minNumber = a[0];
    int maxNumber = a[0];
    for(int i=1;i<n;i++)
    {
       if(minNumber>a[i])
       {
        minNumber = a[i];       
       }
       else if(maxNumber<a[i])
       {
        maxNumber = a[i];
       }
    }
    printf("%d %d",minNumber,maxNumber);

}
int main()
{
    int n;
    scanf("%d",&n);
    
    MaxMin(n);
    
    return 0;
}