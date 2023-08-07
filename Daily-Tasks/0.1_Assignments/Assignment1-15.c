#include<stdio.h>
int main(){
int i,j,row=10;
printf("\n");
for(i=1;i<=row;i++){
    for(j=1;j<=i;j++){
        printf("* ");
    }
    for(j=i;j<row;j++){
        printf("  ");
    }
    for(j=i;j<row;j++){
        printf("  ");
    }
    for(j=1;j<=i;j++){
        printf("* ");
    }
    printf("\n\n");
}

}