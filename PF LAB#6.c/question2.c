#include <stdio.h>
int main(){
	int x;
	printf("enter any digit number:");
	scanf("%d",&x);
	if(x%2==1){
		printf("the number is prime");}
	else {
		printf("not a prime");
	}
}