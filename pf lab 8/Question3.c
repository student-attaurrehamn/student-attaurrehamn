//  the question specifically stated that saddle point is such point that is lowest in row and highest in colummn
# include <stdio.h>
int main(void){
    int arr[3][3]={{3,8,4},
                    {2,7,5}, 
                    {3,6,6}};
  // # this array contains 2 saddle points according to given defination.
    int x;
    int low;
    int tocheck;
    int high;
    int m;
    int col;

    for (int i=0;i<3;i++){
        low =999;
        col=0;
        for (int j=0;j<3;j++){
            if (arr[i][j]<low){
                low=arr[i][j];
                col=j;
            }
        }
            
            
             high=-999;
                for (int l=0;l<3;l++){
                   if (arr[l][col]>high){
                        high=arr[l][col];
                        
                        
            }  
                    }
                
                
                if (high == low){
                    printf("saddle point is : %d @ location (%d, %d)\n",low,i,col);
                        
                }
            }
            
        }
    