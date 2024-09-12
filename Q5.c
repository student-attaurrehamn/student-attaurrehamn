#include<stdio.h>
 int main()
{
	double pricipal;
	float rate_of_interest,time_period;
	float simple_interest=(pricipal*rate_of_interest*time_period)/100;
	printf("enter pricipal but it must be between 100Rs to 1,000,000Rs");
	scanf("If", &pricipal);
	printf("enter rate_of_interest but it must be between 5% to 10%");
	scanf("%f", &rate_of_interest);
	printf("enter time_period between 1 to 10 year");
	scanf("%f", &time_period);
	printf("simple_interest is %f",simple_interest);
}
