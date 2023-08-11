#include<stdio.h>

int main(){
    int i,j,k,row;

printf("Enter row: ");
scanf("%d",&row);
for(i=1;i<=row;i++){
    for(j=1;j<=i*4;j++){
        printf("*  ");
    }
    printf("\n");

    if(i==row){
        break;
    }
    for(k=1;k<=3*i;k++){
        
        printf("\n*\n");
        
    }
printf("\n");
}
}