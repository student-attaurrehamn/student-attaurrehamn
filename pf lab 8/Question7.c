#include <stdio.h>

int main()
{
    int i = 5, j;
    while(i) {
        j = 3;
        while(j) {
            for(int k = 1; k <= 2*i-1; k++) {
                printf(" ");
            }
            if(i == 5) {
                printf("*");
            } else {
                printf("*");
                for(int k = 1; k <= 15-2*(2*i-2); k++) {
                    printf(" ");
                }
                printf("*");
            }
            for(int k = 1; k <= 2*i-1; k++) {
                printf(" ");
            }
            j--;
        }
        printf("\n");
        i--;
    }   
    return 0;
}