// There are three types of loops in C
// 1, While loop - unknown number of iterations 
// 2. For Loop - Fixed number of iterations
// 3. Do While Loop - executes the code once then checks the condition


#include <stdio.h>

int main() {
    int i = 0;
    while (i<10){
        printf("Hello world!\n");
        i++; // this increases the number by 1 (++)
    }

    return 0;
}