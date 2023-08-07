#include<stdio.h>
void printlessthan8times(char *word,int count){
    if(count<7){
        printf("\n%s",word);
        printlessthan8times(word,count+1);
    }

}
int main(){
    char word[100];
    
    printf("Enter the word : ");
    scanf("%s",word);
    printlessthan8times(word,0);
    return 0;
}
