#include<stdio.h>
 int main()
 {
 	float salary, tax_rate, tax;
 	printf("enter salary");
 	scanf("%f", &salary);
 	printf("enter tax_rate");
 	scanf("%f", &tax_rate);
 	tax=(salary*tax_rate)/100;
 	printf("the tax is %f",tax);
 	salary=salary-tax;
 	printf("the salary after tax is %f",salary);
 }
