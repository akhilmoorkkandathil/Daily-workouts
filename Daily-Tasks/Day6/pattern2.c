#include<stdio.h>

int main(){
    int i,j,k,row,l;

printf("Enter row: ");
scanf("%d",&row);
for(i=1;i<=row;i++){
    for(j=1;j<=(2*i)-1;j++){
        printf("*   ");
    }
    printf("\n\n");

    if(i==row){
        break;
    }
    for(k=1;k<=i;k++){
        for(l=1;l<=i;l++){
        
          printf("*   ");
        }
        printf("\n\n");
        
    }
printf("\n");
}
}