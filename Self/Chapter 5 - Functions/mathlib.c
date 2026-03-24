#include <stdio.h>
#include <math.h>

int sq(int a){
    printf("The area of the square is %.2f\n",pow(a,2)); // pow function always gives the output in float so we should use %f format specifier for it
}

int main() {
    // int a = 5;
    // sq(a);
    // a = 4;
    // sq(a);
    // a = 3;
    // sq(a);
    // a = 6;
    // sq(a);

    unsigned char data = '255';
    printf("%u\n",data);
    printf("%d",sizeof(data));

    // math lib functions always give output in double data type with format specifier %lf


    // fmod(x,y) - x % y for float numbers gives remainder 
    // log(x) - log of x with base e
    // exp(x) - e raise to power x
    // ceil(2.5) - 3
    // floor(2.5) - 2
    // pow(a,b) - a raise to power b
    // Fabs(x) - absolute value of this floating point number
    // sqrt(x) - square root of x 
    // sin(x) cos(y) tan(z) - values of these trignometric functions
    return 0;
}