#include <stdio.h>

int main() {
    
    int marks;
    char grade;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    
    if (marks>=90){
        grade = 'O'; 
    } else if (marks>=80){
        grade = 'A';
    } else if (marks>=70){
        grade = 'B';
    } else if (marks>=60){
        grade = 'C';
    } else if (marks>=50){
        grade = 'D';
    } else {
        grade = 'E';
    }

    printf("Your Grade is %c",grade);


    return 0;
}