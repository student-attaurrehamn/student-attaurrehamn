#include <stdio.h>
int main(){
	float total_calories,fat,fat_calories,percent_calories_fat;
	printf("enter total calories and fat in positive:");
	scanf("%f" "%f",&total_calories,&fat);
	if(total_calories>0 && fat>0){
		fat_calories= fat*9;
		if(total_calories > fat_calories){
			percent_calories_fat=(fat_calories/total_calories)*100;
			printf("perecnt of calories from fat  %f",percent_calories_fat);}
		else{
			printf("the calories or fat grams were incorrectly entered");}
	}
return 0;
}