#include<stdio.h>
int main(){
    int i,j,k,row;
    printf("Enter row");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=(i*i)*2;j++){
            printf("* ");
            if(j%(i*2)==0){
                printf("\n");
            }
        }
        for(k=1;k<=3;k++){
            if(i==row){
                continue;
            }else{
            printf("* \n");
            }
        }        
    }
    }