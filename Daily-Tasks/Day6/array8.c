#include<stdio.h>

int main(){
    int i,j,a[20],limit,num;
     
     printf("Enter limit of the array: ");
     scanf("%d",&limit);
     printf("Enter values into array\n");
     for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
     }
     printf("Enter a number: ");
     scanf("%d",&num);
     for(i=0;i<limit;i++){
        for(j=i+1;j<limit;j++)
        if(a[i]+a[j]==num){
            printf("%d+%d=%d\n",a[i],a[j],num);
        }
     }

    return 0;
}