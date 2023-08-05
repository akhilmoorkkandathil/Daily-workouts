#include<stdio.h>
int main(void){
    int i,j,n=3;
    for(i=0;i<=n;i++){
        for(j=i;j<=n;j++){
           printf("  ");
        }
        for(j=0;j<=n;j++){
            if(j==0||j==n||i==0||i==n){
           printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
        
    }

}