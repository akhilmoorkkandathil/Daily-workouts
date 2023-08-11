#include<stdio.h>

int main(){
    int i,j,a[20],limit,count=0,temp;
     
     printf("Enter limit of the array: ");
     scanf("%d",&limit);
     printf("Enter values into array\n");
     for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
     }
     printf("Array is\n");
     for(i=0;i<limit;i++){
        printf("%d\t",a[i]);
     }
     for(i=0;i<limit;i++){
        if(a[i]%5==0 && i+2<limit){
            a[i+2]=0;
            count++;
        }
     }
     for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(a[i]==0){
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
            }
        }
     }
     printf("\nNew array after deleting the second number after the value of 5 multiple\n");
     for(i=0;i<limit-count;i++){
        printf("%d\t",a[i]);
     }

    return 0;
}