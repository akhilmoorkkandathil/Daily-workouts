#include<stdio.h>
int main(void){
    int i,j,k,row,s2=3,l,s1=2;
    printf("Enter number of rows : ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
        for(j=0;j<i+1;j++){
            for(l=0;l<s1;l++)
               printf("* ");
            printf("\n");
        }
        s1=s1+2;
        
        for(k=0;k<s2;k++)
            printf("*\n");
        
    
}
 

