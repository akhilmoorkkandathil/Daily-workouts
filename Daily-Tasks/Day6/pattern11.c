#include<stdio.h>

int main(){
    int i,j,k,row;

printf("Enter row: ");
scanf("%d",&row);
for(i=1;i<=5;i++){
    for(j=1;j<=(6-i)*2;j++){
        printf("*  ");
    }
    printf("\n");

    if(i==5){
        break;
    }
    for(k=1;k<=i;k++){
        
        printf("\n*\n");
        
    }
printf("\n");
}
}