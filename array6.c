#include<stdio.h>
int main(){
    int array[100],i,position,n;
    printf("Enter length of array : ");
    scanf("%d",&n);
    printf("Enter values of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter position to which value is deleted : ");
    scanf("%d",&position);
    for(i=position-1;i<=n-1;i++){
        array[i]=array[i+1];
    }
    printf("Resultant array is : ");
    for(i=0;i<n-1;i++){
        printf("\n %d \n",array[i]);
    }
    
    return 0;

}