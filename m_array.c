#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,j,values[3][3];
    printf("Enter values \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&values[i][j]);
        }        
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",values[i][j]);
        }
    printf("\n");
    }
}