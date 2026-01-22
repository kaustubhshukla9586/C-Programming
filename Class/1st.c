#include <stdio.h>

int main() {
    printf("Hello\t World");
    int a;
    a = 11;
    int b = 22;
    int c = 22;
    int d = a + b + c;
    printf("\n%d %d %d\n",b,c,d);

    // Format Specifiers
    // %c = strings and characters
    // %d = Integers
    // %f = float numbers
    // %i = double data type

    printf("The sum of %d,%d and %d is %d",a,b,c,d);
    return 0;



}