#include<stdio.h>
int main(){
    int i,j,n=5;
   

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i==n || i==j || j==1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}