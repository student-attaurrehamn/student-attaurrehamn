#include <stdio.h>
int main(){
	int row;
	char x='*';
	
	for(row=0;row<6;row++){
		if(row==0 || row==5){
			printf("%c       %c \n",x,x);}
		if(row>=1 && row<5){
		printf("%c %c %c %c %c \n",x,x,x,x,x);}
	}
return 0;	
}