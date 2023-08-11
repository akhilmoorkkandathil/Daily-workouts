#include<stdio.h>

int main(){
    int i,j,k;
for(i=0,k=i;i<7;i++){
    (i<=4)? k++:k--;
    for(j=0;j<5;j++){
        if(j<=k){
            printf("* ");
        }
    }
    printf("\n");
}
}