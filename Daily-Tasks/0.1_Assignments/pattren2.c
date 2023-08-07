#include<stdio.h>
int main(){
int i,j,row,p,k,l;
printf("\nEnter row number: ");
scanf("%d",&row);
printf("\n");
p=1;
for(i=1;i<=row;i++){
    for(j=1;j<=i;j++){
        if(p<10){
        printf("%d  ",p);
        p++;
        }else{
            printf("%d ",p);
            p++;
        }
    }
    printf("\n");
}
printf("\n");

}