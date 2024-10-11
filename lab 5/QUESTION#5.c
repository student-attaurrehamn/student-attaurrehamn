#include <stdio.h>
int main(){
	float gpa;
	printf("enter your gpa:");
	scanf("%f",&gpa);
	(gpa>=0.0&&gpa<=0.99)?printf("failed semester-registration suspended"):
	(gpa>=1&& gpa<=1.99)?printf("on probation for next semester"):
	(gpa>=2&&gpa<=2.99)?printf("no-message"):
	(gpa>=3&&gpa<=3.49)?printf("dean's list for semester"):
	(gpa>=3.5&&gpa<=4)?printf("highest honors for semester"):
		printf("invalid gpa entered");
	return 0;
}