#include <stdio.h>
#include<string.h>
int main(void) 
{
int A,C,res;
float B;
scanf("%d%f%d",&A,&B,&C);
res=(B/2)*(2*A+(B-1)*C);
printf("%d",res);
return 0;
}
