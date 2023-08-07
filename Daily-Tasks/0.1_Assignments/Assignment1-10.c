#include<stdio.h>
int main(){
int i,j,row;
char p;
printf("\nEnter rnumber of rows: ");
scanf("%d",&row);
printf("\n");
for(i=1;i<=row;i++){
    p='A';
    for(j=i;j<=row;j++){
        printf("  ");
    }
    for(j=1;j<i;j++,p++){
        printf("%c ",p);
    }
    for(j=1;j<=i;j++,p--){
        printf("%c ",p);
    }
    printf("\n");
}

}