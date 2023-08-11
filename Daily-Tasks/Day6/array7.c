#include<stdio.h>

int main(){
    int i,j,a[20],limit,temp;
     
     printf("Enter limit of the array: ");
     scanf("%d",&limit);
     printf("Enter values into array\n");
     for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
     }
     for(i=0;i<limit;i++){
        for(j=i+1;j<limit;j++)
        if(a[i]==0){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
     }
     printf("New array : ");
     for(i=0;i<limit;i++){
        printf("%d ",a[i]);
     }

    return 0;
}