#include<stdio.h>

int main(){
    int i,j,row;
    printf("Enter number of raws : ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=i;j<=row;j++){
            printf("   ");
        }
        for(j=1;j<=i;j++){
            if(j==1 || i==j){
             
                printf("  1  ");
            }else{
                printf("  %d  ",j);
            }           
        }
        printf("\n\n");       
    }
    return 0;
}
