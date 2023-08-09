#include<stdio.h>

void getarray(int array[], int size){
    printf("Enter value of array:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("\n");

}
void displayArray(int array[],int size){
    printf("Array is \n");
    for(int i=0;i<size;i++){
        printf("%d\t",array[i]);
}
}
int main(){
    int array[20],size;
    printf("Enter size of the array");
    scanf("%d",&size);
    getarray(array,size);
    displayArray(array,size);

}