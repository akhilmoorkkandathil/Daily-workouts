#include<stdio.h>
int main(){
    int array[100],i,position,value,n;
    printf("Enter length of array : ");
    scanf("%d",&n);
    printf("Enter values of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
 
    }
    printf("Enter position to which value is inserted : ");
    scanf("%d",&position);
    printf("Enter value to be inserted : ");
    scanf("%d",&value);
    for(i=n-1;i>=position-1;i--){
        array[i+1]=array[i];
        array[position-1]=value;
        printf("Resultant array is : ");
    }
    for(i=0;i<=n;i++){
        printf("\n %d \n",array[i]);
    }
    
    return 0;

}