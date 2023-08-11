#include<stdio.h>

int main(){
    int i,j,a[20],limit,count,flag,temp;
     
     printf("Enter limit of the array: ");
     scanf("%d",&limit);
     printf("Enter values into array\n");
     for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
     }
     for(i=0;i<limit;i++){
        for(j=i+1;j<limit;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
     }
     printf("Sorted array is\n");
     for(i=0;i<limit;i++){
        printf("%d ",a[i]);
     }

     for(i=0;i<limit;i++){
        flag=1;
        for(j=i+1;j<limit;j++){
             if(a[i]==a[j] && a[j]!=0){
                flag++;
                a[j]=0;
                
            }
        }
        if(flag==1 ){
            count++;
            }
    }
    printf("\nCount of unique elements are : %d",count);

    return 0;
}