#include <stdio.h>
    
int main()
{
    int n = 10, i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {

                printf("%d ", j*2); // Add a space after each number
            }
        printf("\n");
    }
    return 0;
}
