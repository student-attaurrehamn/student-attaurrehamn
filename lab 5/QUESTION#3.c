#include <stdio.h>
int main(){
	char coffee_type;
	int coffee_size;
	float time;
	printf("enter coffee type b for black and w for white:");
	scanf("%c",&coffee_type);
	printf(" 1 for manual 2 for double");
	scanf("%d",&coffee_size);
	switch(coffee_type){
		case 'w':
			printf("water for 15 min");
			printf("add sugar for 15 min\n");
			printf("mix well for 20 min");
			printf("add coffee for 2 min\n");
			printf("add milk for 4 min\n");
			printf("mix well for 20 min\n");
			switch(coffee_size){
				case 1:
					time=76;
					printf("%f",time);
					break;
				case 2:
					time=0.5*76+76;
					printf("%f",time);
					break;
			default:
				printf("not right input for size");
			}
		break;
		case 'b':
			printf("water for 20 min\n");
			printf("add sugar for 20 min\n");
			printf("mix well for 25 min\n");
			printf("add coffee for 15 min\n");
			printf("mix well for 25 min\n");
			switch(coffee_size){
				case 1:
					time=115;
					printf("%f",time);
					break;
				case 2:
					time=0.5*115+115;
					printf("%f",time);
					break;
			default:
				printf("not right input for size");
				}
			break;
		default:
			printf("not available type of coffee");
		}
	return 0;
}