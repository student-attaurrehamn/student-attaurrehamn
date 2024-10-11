#include <stdio.h>
#include <math.h>
int main(){
	int orignal_number,number,digit,cube,sum=0;
	printf("enter  any digit number:");
	scanf("%d",&number);
	orignal_number=number;
	do{
	digit=number%10;
	cube=pow(digit,3);
	sum=sum+cube;
	number=number/10;}
	while(number!=0);
	if(sum==orignal_number){
		printf("number is armstrong");
	}
	return 0;	
}