#include <stdio.h>

int main() {
    
    int marks;
    char grade;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    
    if (marks>=90){
        grade = 'A'; // we use '' for char and not double quotes
    } else if (marks>=80){
        grade = 'B';
    } else if (marks>=70){
        grade = 'C';
    } else if (marks>=60){
        grade = 'D';
    } else if (marks>=50){
        grade = 'E';
    } else {
        grade = 'F';
    }

    printf("Your Grade is %c",grade);


    return 0;
}