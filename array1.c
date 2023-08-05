#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i,j;
    int a[3][3],b[3][3],sum[3][3];
    printf("Enter array vaiues\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);

        }
    }
    printf("Enter array vaiues\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);

        }
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j]=a[i][j]*b[i][j];
            printf("%d\t",sum[i][j]);          
        }
        printf("\n\n");
    }
    return 0;
}