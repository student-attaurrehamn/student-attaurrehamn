#include <stdio.h>
int main(){
	int ph;
	scanf("%d",&ph);
	if(ph>7){
		if(ph<12){
			printf("alkaline");
		}
		else
		printf("very alkaline");}
	else if(ph==7){
		printf("nuetral");}
	else if(ph>2){
		printf("acidic");}
		else 
		printf("very acidic");
}