#include<stdio.h>

int main(){
    int income;
    float tax;
    printf("Enter anuual income: ");
    scanf("%d",&income);
    if(income<500000 && income>250000){
        tax=(income*5)/100;
    }else if(income<1000000 && income>500000){
        tax=(income*20)/100;
    }else{
       tax=(income*30)/100;
    }
    if(income<250000){
        printf("No tax");
    }else{
    printf("Income tax amount = %.2f",tax);
    }
    return 0;
}