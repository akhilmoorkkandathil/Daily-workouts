#include<stdio.h>

int main(){
    int i,j,limit,count;
printf("Enter limit: ");
scanf("%d",&limit);
printf("Prime numbers are: ");
for(i=1;i<=limit;i++){
    count=1;
    for(j=2;j<=i/2;j++){
        if(i%j==0 && i!=2 ){
            count++;
            break;
        }
    }
    if(count==1 && i!=1){
        printf("%d  ",i);
    }
}
}
