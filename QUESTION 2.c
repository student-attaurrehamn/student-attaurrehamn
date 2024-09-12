#include<stdio.h>
int main(){
	    
	int x,y,z;
	printf("enter integer x");
	printf("enter integer y");
	scanf("%d%d", &x, &y);
	z=y;
	y=x;
	x=z;
	printf("enter value x=%d and than value y=%d",x,y);
	return(0);
}