#include<stdio.h>
int main(){
int i,j,row;
char p,k,l;
printf("\nEnter row number: ");
scanf("%d",&row);
printf("\n");
for(i=1,k='E';i<=row;i++,k--){
    p=k;
    for(j=i;j<=row;j++,p--){
        printf("%c ",p);
        
    }
    printf("\n");
}
printf("\n");

}