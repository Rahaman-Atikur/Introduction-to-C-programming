#include<stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i = 1; i <= k; i++) 
        {
            printf("%d ", i);
        }
    
    for(int j = 0; j <n-1; j++) {
        printf("\n");
        for(int i = 1; i <= k; i++) {
            printf("%d ", i);
        }
    }

    return 0;
}