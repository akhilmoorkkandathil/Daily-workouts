#include<stdio.h>

int main(){
    int i,j,a[20],limit,position,value;
     
     printf("Enter limit of the array: ");
     scanf("%d",&limit);
     printf("Enter values into array\n");
     for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
     }
     printf("Enter position to insert: ");
     scanf("%d",&position);
     printf("Enter value to insert: ");
     scanf("%d",&value);
     for(i=limit;i>=position;i--){
        a[i]=a[i-1];
     }
     a[i]=value;
     printf("New array :");
     for(i=0;i<=limit;i++){
        printf("%d ",a[i]);
     }

    return 0;
}