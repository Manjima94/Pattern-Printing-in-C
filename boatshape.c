#include <stdio.h>

int main()
{
   int n=10,j,i,s;
   
   for(i=1; i<=5; i++){
       for(j=1; j<n; j++){
           if((i+j)<=n){
               printf(" ");
           }else {
               printf(" *");
           }
             
       }
       printf("\n");
   }
   
   for(i=n; i>=8; i--){
       for(s=i; s<n; s++){
           printf(" ");
       }
       for(j=1; j<=i; j++){
       printf("* ");
       }
       printf("\n");
   }

    return 0;
}
