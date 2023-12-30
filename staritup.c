
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int i;
    printf("enter a string: ");
  
       scanf("%s",&str[i]);
    
    for(int i=0; i<=strlen(str); i++){
    
        printf("%c",str[i]);
        
        if(i<strlen(str)-1){
            printf("*");
        }
    }
    return 0;
}