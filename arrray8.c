#include<stdio.h>
int main(){
    int array[100],i,j=0,k=0,even[20],odd[20],n;
    printf("Enter length of array : ");
    scanf("%d",&n);
    printf("Enter values of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        if(array[i]%2==0){
            even[j]=array[i];
            j++;
            }else{
                odd[k]=array[i];
                k++;
            }
    }
    printf("Array of odd numbers\n");
    for(i=0;i<k;i++){
        printf("%d \n",odd[k]);
    }
    printf("Array of even numbers\n");
    for(i=0;i<j;i++){
        printf("%d \n",even[j]);
    }
    return 0;

}