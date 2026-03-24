#include <stdio.h>

int main()
{
    int a = 10;    // this takes 4 bytes
    float b = 5.5; // this takes 4 bytes
    char c = 'A';  // this takes 1 byte

    printf("The value of a = %d\n", a); // int uses %d
    printf("The value of b = %f\n", b); // float uses %f
    printf("The value of c = %c\n", c); // char uses %c


    // Just to check the size of these data types for your system specifically.
    printf("char  = %zu\n", sizeof(char)); 
    printf("int   = %zu\n", sizeof(int));
    printf("float = %zu\n", sizeof(float));
    return 0;
}