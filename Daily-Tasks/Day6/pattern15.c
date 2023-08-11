#include<stdio.h>
int main(){
    int i,j,n=7;

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || j==1 || i==j || i==n || j==n || i+j==n+1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}