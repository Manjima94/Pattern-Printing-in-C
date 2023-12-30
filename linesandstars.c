#include <stdio.h>
    
int main()
{
    int m,n,i,j;
    printf("enter no of rows:");
    scanf("%d",&m);
    printf("enter no of coloumns:");
    scanf("%d",&n);
    for(i=1 ;i<=m; i++){
        for(j=1 ; j <=n; j++){
        
        printf("* ");
        }
        printf("\n");
    }

    return 0;
}