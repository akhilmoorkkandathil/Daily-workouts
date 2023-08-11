#include<stdio.h>

int main(){
    int i,j,a[20],limit,count;
     
     printf("Enter limit of the array: ");
     scanf("%d",&limit);
     printf("Enter values into array\n");
     for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
     }
     printf("\nFrequency of elements\n");
     for(i=0;i<limit;i++){
        count=1;
        for(j=i+1;j<limit;j++){
             if(a[i]==a[j] && a[j]!=0){
                count++;
                a[j]=0;
                
            }
        }
       if(a[i]!=0){
         printf("\n %d = %d",a[i],count);
       }
    }

    return 0;
}