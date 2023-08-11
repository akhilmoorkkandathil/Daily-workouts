#include<stdio.h>
int main(){
    int i,j,n=5,k,p;
for(i=1,k=5;i<=n;i++,k--){   
    for(j=1,p=k;j<=i;j++,p++){
        printf("%d ",p);
    }
    printf("\n");
}
}