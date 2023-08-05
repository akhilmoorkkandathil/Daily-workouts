#include<stdio.h>
int main(void){
    int i,j,k,l,row;
    printf("Enter row number");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=3*i;j++){
            printf("*  ");
        } 
        printf("\n");  
        if(i==row){
            break;
        } 
        for(k=1;k<=2*i;k++){
            for(l=1;l<=2*i;l++){
            printf("* ");

            }
            printf("\n");
        } 
         
    }
 
}