#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a;
    int b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    
    a=a-b;
    printf("a=%d \n",a);
    printf("b=%d \n",b);

    printf("Hello world!!! \nAkhil \n");
    return 0;
}