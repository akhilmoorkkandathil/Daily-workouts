#include<stdio.h>
int main(void){
    int i,j,k,row;
    printf("Enter row number");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i*2;j++){
            printf("*  ");
        } 
        printf("\n");   
        for(k=1;k<=i;k++){
            printf("\n*\n");
        } 
        printf("\n"); 
    }
 
}