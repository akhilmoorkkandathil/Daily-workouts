#include<stdio.h>
void checkprime(int n){
    int flag=1;
    for( int i=2; i<=n/2;i++){
        if (n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("prime number\n");

    }else{
        printf("Not a prime number\n");
    }
}
int main(){
    int n;
    printf("\nEnter a number to check wether it is prime or not ");
    scanf("%d",&n);

    if(n>1){
    checkprime(n);
    }else{
        printf("Not a prime number\n ");
    }
}