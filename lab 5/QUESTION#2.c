#include <stdio.h>
int main(){
	int week_day,vacation;
	printf("enter 1 if weekday true or 0 for false:\n");
	scanf("%d",&week_day);
	printf("enter 1 if vacation true or 0 for false:\n");
	scanf("%d",&vacation);
	if(week_day==1&&vacation==0){
		printf("false");}
	else if(week_day==0&&vacation==0){
		printf("true");
	}
	else if(week_day==0&&vacation==1){
		printf("true");
	}
	else
	printf("false");
	return 0;
	}