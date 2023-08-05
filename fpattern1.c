#include<stdio.h>
int main(void){
    int i,j,k,row;
    printf("Enter row number");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        printf("\n*\n*\n");
        for(j=1;j<=i*3;j++){
            printf("* ");
        }       
    }
}