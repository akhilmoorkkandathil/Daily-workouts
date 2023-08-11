#include<stdio.h>

int main(){
    int i,j,limit,count,a[i],n;
    printf("Enter limit: ");
scanf("%d",&limit);
printf("Entere values: ");
for(i=0;i<limit;i++){
    scanf("%d",&a[i]);
}
printf("Prime numbers are: ");
for(i=1;i<=limit;i++){
    count=0;
    n=a[i];
    for(j=2;j<=n;j++){
        if(a[i]%j==0){
            count++;
            break;
        }
    }
    if(count==0){
        printf("%d  ",a[i]);
    }
}
}
