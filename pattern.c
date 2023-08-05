#include<stdio.h>

void butterfly(int i,int j,int n){    /* star butterfly pattern  */
for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        for(j=i;j<n;j++){
            printf("  ");
        }
        for(j=i;j<n;j++){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
    printf("\n");
}   for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf("* ");
        }
        for(j=1;j<i;j++){
            printf("  ");
        }
        for(j=1;j<i;j++){
            printf("  ");
        }
        for(j=i;j<=n;j++){
            printf("* ");
        }
    printf("\n");
} 
}

void numberpattern1(int i, int j, int n){   /* Number pyramid */
    for(i=1;i<=n;i++){
        int p;
        for(j=i;j<n;j++){
            printf("  ");
        }
        for(j=1,p=1;j<=i;j++,p++){
            printf("%d ",p);
        }
        for(j=1,p=1;j<i;j++,p++){
            printf("%d ",p);
        }
        printf("\n");
    }

}

void numberpattern2(int i, int j, int n){    /* Right decreasing triangle */
    for(i=1;i<=n;i++){
        int p=0;
        for(j=1;j<=i;j++,p++){
            printf("  ");
        }
        for(j=i;j<=n;j++,p++){
            printf("%d ",p);
        }
        
        printf("\n");
    }
}

void numberpattern3(int i, int j, int n){    /* Diamond bipyramid */
    int p;
    for(i=1;i<n;i++){
        for(j=i;j<n;j++){
            printf("  ");
        }
        for(j=1,p=1;j<i;j++,p++){
            printf("%d ",p);
        }
        for(j=1;j<=i;j++,p--){
            printf("%d ",p);
        }
        
        printf("\n");
    }
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            printf("  ");
        }
        for(j=i,p=1;j<n;j++,p++){
            printf("%d ",p);
        }
        for(j=i;j<=n;j++,p--){
            printf("%d ",p);
        }
        
        printf("\n");
    }

}

void numberpattern4(int i, int j, int n){    /* Rotated Butterfly Number pattern */
int p;
    for(i=1,p=5;i<n;i++,p--){
        for(j=1;j<i;j++){
            printf("  ");
        }
        for(j=i;j<n;j++){
            printf("%d ",p);
        }
        for(j=i;j<=n;j++){
            printf("%d ",p);
        }
        
        printf("\n");
    }
    for(i=1;i<=n;i++){
        for(j=i;j<n;j++){
            printf("  ");
        }
        for(j=1;j<i;j++){
            printf("%d ",i);
        }
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }        
        printf("\n");
    }
}

void alphabetpattern1(int i, int j, int n){   /* increasing alphabet */
    for(i=1;i<=n;i++){
        char p='A';
        for(j=1;j<=i;j++,p++){
            printf("%c ",p);
        }
        for(j=i;j<n;j++,p++){
            printf("  ");
        }
        for(j=i;j<=n;j++,p--){
            printf("  ");
        }
        for(j=1;j<=i;j++,p--){
            printf("%c ",p);
        }

    printf("\n");
}
}

void alphabetpattern2(int i,int j,int n){
    char k='B';
    for (i=0;i<=n;i++,k++){
        for(j=i;j<=n;j++){
            printf("  ");
        }
        for(j=1;j<i;j++){
            printf("%c ",k);
        }
        for(j=1;j<=i;j++){
            printf("%c ",k);
        }
        printf("\n");
    }
}

void alphabetpattern3(int i,int j,int n){
    
    for (i=0;i<=n;i++){
        for(j=i;j<=n;j++){
            printf("  ");
        }
        for(j=1;j<i;j++){
            if(i%2==1){
            printf("A ");
            }else{
                printf("* ");
            }
        }
        for(j=1;j<=i;j++){
            if(i%2==1){
            printf("A ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }


}

int main(){
    int i;
    int j;
    int n=5;
   /* butterfly(i,j,n); */
   /* numberpattern1(i,j,n); */    /* Number pyramid */
   /* numberpattern2(i,j,n); */    /* Right decreasing triangle */
   /* numberpattern3(i,j,n); */    /* Diamond bipyramid */
   /* numberpattern4(i,j,n); */    /* Rotated Butterfly Number pattern */
   /* alphabetpattern1(i,j,n); */
   alphabetpattern2(i,j,n);
   alphabetpattern3(i,j,n);
}

