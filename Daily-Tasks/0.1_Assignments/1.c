#include<stdio.h>
#include<string.h>
int main(){
    char name[20];
    printf("Enter your name: ");
    gets(name);
    printf("Your name is %s",name);
    return 0;
}