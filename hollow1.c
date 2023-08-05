#include<stdio.h>
int main(void){
    int i,j,n=5;
    for(i=1;i<n;i++){
        for(j=i;j<=n;j++){
            printf("  ");
        }
        for(j=1;j<i;j++){
            if(j==1){
            printf("* ");
            }else{
                printf("  ");
            }
        }
        for(j=1;j<=i;j++){
            if(i==j||j==1){
            printf("* ");
            }else{
                printf("  ");
            }
        }
    printf("\n");
    
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("  ");
        }
        for(j=i;j<n;j++){
            if(j==i||i==1){
            printf("* ");
            }else{
                printf("  ");
            }
        }
        for(j=i;j<=n;j++){
            if(j==n||i==1||j==i){
            printf("* ");
            }else{
                printf("  ");
            }
        }
    printf("\n");
    
    }

}

        