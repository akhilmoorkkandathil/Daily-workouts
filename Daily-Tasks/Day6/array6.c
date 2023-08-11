#include<stdio.h>

int main(){
    int i,j,a[20],limit,count;
     
     printf("Enter limit of the array: ");
     scanf("%d",&limit);
     printf("Enter values into array\n");
     for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
     }
     printf("\nArray without prime numbers\n");
     for(i=0;i<limit;i++){
        if(a[i]%2==0 || a[i]%3==0 || a[i]%5==0 || a[i]%7==0){
            a[i]=0;
        }
        if(a[i]!=0 || a[i]==2 || a[i]==3 || a[i]==5 || a[i]==7 && a[i]==1){
        printf("%d ",a[i]);
        }
     }
    
     

    return 0;
}