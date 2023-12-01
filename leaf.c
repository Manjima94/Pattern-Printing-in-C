#include <stdio.h>

int main()
{
   int n=10,j,i,s;
   
   for(i=1; i<=n; i++){
       for(j=i; j<n; j++){
           if((i+j)<=n){
               printf(" ");
           }else {
               printf(" *");
           }
             
       }
       printf("\n");
   }return 0;
}
   
   