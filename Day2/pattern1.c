#include<stdio.h>
int main(){
int i,j,row,p,k,l;
printf("\nEnter row number: ");
scanf("%d",&row);
printf("\n");
/*
for(i=1,k=row;i<=row;i++,k--){
    for(j=1;j<=i;j++){
        printf("  ");
    }
    
    for(j=i,l=1;j<row;j++,l++){
        printf("%d ",l);
    } 
    p=k;
    for(j=i;j<=row;j++,p--){
        printf("%d ",p);
    } 
    printf("\n");
}
printf("\n");
*/
for(i=1;i<=row;i++){
    p=1;
    for(j=1;j<=i;j++){
        printf("  ");
    }
    
    for(j=i;j<row;j++,p++){
        printf("%d ",p);
    } 
    for(j=i;j<=row;j++,p--){
        printf("%d ",p);
    } 
    printf("\n");
}
printf("\n");

}