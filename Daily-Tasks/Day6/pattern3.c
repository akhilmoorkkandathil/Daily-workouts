#include<stdio.h>

int main(){
    int i,j,k,row,l;

printf("Enter row: ");
scanf("%d",&row);
for(i=1;i<=row;i++){
    for(j=1;j<=i;j++){
        for(k=1;k<=i*3;k++){
            printf("*   ");
        }
        printf("\n");
    }

    if(i==row){
        break;
    }
printf("*\n*\n*\n");
}
return 0;
}