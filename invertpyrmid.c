#include<stdio.h>

int main()
{
int n=5, s, i, j;

for(i = n; i >= 1; i--)
{

for(s = i; s < n; s++){
printf(" ");
}
for(j = 1; j <= i; j++){
printf("* ");
}
printf("\n");
}
return 0;
}
