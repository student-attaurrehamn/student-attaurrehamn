#include <stdio.h>
int main(){
	int number,sum=0,a=0,b=1;
	printf("enter number:");
	scanf("%d",&number);
	if(number%2==1){
		printf("the number %d is prime \n",number);
		do{
		printf("%d",a);
		sum=a+b;
		a=b;
		b=sum;}
		while(b<=number);}	
	return 0;
	}