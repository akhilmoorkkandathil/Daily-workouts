#include<stdio.h>

int main(){
    int i,j,a[20],limit,temp;
     
     printf("Enter limit of the array: ");
     scanf("%d",&limit);
     printf("Enter values into array\n");
     for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
     }
     printf("Repeated elements are :");
     for(i=0;i<limit;i++){
        temp=a[i];
        for(j=i+1;j<limit;j++){
            if(a[i]==a[j] && temp!=0){
                 temp=0;
                 printf("%d\t",a[i]);
            }else if(temp==a[j]){
                a[j]=0;
            }
        }
     }
     
     return 0;
}