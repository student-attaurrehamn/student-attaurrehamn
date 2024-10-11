#include <stdio.h>
int main()
{
int x;
printf("enter any positive number:");
scanf("%d",&x);
(x%10==0)?printf("last digit is zero"):printf("last digit is non-zero");
return 0;
}