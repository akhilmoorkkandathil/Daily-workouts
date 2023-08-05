#include<stdio.h>
int main(){
    int array[100],i,l1=0,l2=0,n;
    printf("Enter length of array : ");
    scanf("%d",&n);
    printf("Enter values of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        if(array[i]>l1){
            l2=l1;
            l1=array[i];
            }else if(array[i]>l2 && array[i]<l1){
                l2=array[i];
            }
    }
    
    printf("First largest number : %d \n",l1);
    printf("Second largest number : %d",l2);

    
    return 0;

}