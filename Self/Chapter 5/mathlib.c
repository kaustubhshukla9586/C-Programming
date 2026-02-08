#include <stdio.h>
#include <math.h>

int sq(int a){
    printf("The area of the square is %.2f\n",pow(a,2)); // pow function always gives the output in float so we should use %f format specifier for it
}

int main() {
    int a = 5;
    sq(a);
    a = 4;
    sq(a);
    a = 3;
    sq(a);
    a = 6;
    sq(a);
    
    return 0;
}