#include<stdio.h>
int main(void){
    int i,n;
    int arr1[100],arr2[100];
    printf("Number of elements in the array : ");
    scanf("%d",&n);
    printf("Enter %d elements of array \n",n);
    for(i=0;i<n;i++){
        printf("Element %d: ",i);
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
    printf("Entered values of first array are : ");
    for(i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    printf("\nValues of second array : ");
    for(i=0;i<n;i++){  
        printf("%d ",arr2[i]);
    }

}