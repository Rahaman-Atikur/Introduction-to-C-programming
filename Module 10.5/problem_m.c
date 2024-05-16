#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);

    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    } 
    int max_num =INT_MAX, min_num=INT_MIN;
    int min_index,max_index;
    for(int i=0;i<n;i++)
    {
        if(ar[i]<=max_num)
        {
            max_num=ar[i];
            max_index=i;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]>min_num)
        {
            min_num =ar[i];
            min_index=i;
        }
    }
    int tmp= ar[min_index];
    ar[min_index]=ar[max_index];
    ar[max_index] = tmp;
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}