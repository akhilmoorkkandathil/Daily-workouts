#include<stdio.h>

int main(){
    int writtenmark,labmark,assignmentmark;
    float grade;
    printf("Enter mark scored by the student\n");
    printf("Writtrn exam = ");
    scanf("%d",&writtenmark);
    printf("Lab exam = ");
     scanf("%d",&labmark);
     printf("Assignments = ");
     scanf("%d",&assignmentmark);
     grade=(writtenmark*70)/100+(labmark*20)/100+(assignmentmark*10)/100;
     printf("Grade of student is %.2f",grade);
    return 0;
}