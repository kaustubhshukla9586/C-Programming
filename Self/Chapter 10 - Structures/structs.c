#include <stdio.h>
#include <string.h>

// Collection of heterogeneous elements (elements of differest data types) under a single name.
// Blueprint never takes space in the memory. Thats why we do not initialize inside the declaration of struct blueprint
// 

// Declaration of structs - always outside of the main branch (Blueprint of structure students)

    struct students {
        char *name; // 10 bytes when char name[10] // If we use pointer then +2
        int rollno; // 4 bytes
        float marks; // 4 bytes
    }s1; //s1 will declare the vairable and now this structure will take space in memory, This is just a way of initializing the variable not necessary to define it here only.

// Members of structure nhere are name rollno and marks. 
// Members are public variables by default

// declare and initialize variables


int main() {

    // initialization of structs
    // struct students s1 ;

    // s1.name = "Yash";
    // s1.rollno = 93;
    // s1.marks = 29.9;

    // printf("%s %d %f",s1.name,s1.rollno,s1.marks);

    printf("hello\n");
    // strcpy(s1.name,"Jaskirat"); // This won't work when the structure is declared as the pointer string (char *str) and not as normal char str[10] 
    s1.name = "Kaustubh";
    s1.rollno = 10;
    s1.marks = 99.2;

    printf("Student Details: \n");
    printf("%s \n %d \n %f \n",s1.name,s1.rollno,s1.marks);
    
    return 0;
}