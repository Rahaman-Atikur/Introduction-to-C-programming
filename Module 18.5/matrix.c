#include <stdio.h>
#include <stdlib.h> 

int main() {
    int N;
    scanf("%d", &N);

    
    int a[N][N];

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int primarySum = 0;
    int secondarySum = 0;

   
    for (int i = 0; i < N; i++) {
        primarySum += a[i][i]; 
        secondarySum += a[i][N - i - 1];  
    }

    
    int absoluteDiff = abs(primarySum - secondarySum);

    printf("%d\n", absoluteDiff);

    return 0;
}
