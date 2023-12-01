#include <stdio.h>

int main()
{
   int n=5,i,s,j;
   for(i=1;i<=n;i++){
       for(s=i;s<=n;s++){
           printf(" ");
       }
       for(j=1;j<=n;j++){
           printf("* ");
       }
       printf("\n");
   }

    return 0;
}

