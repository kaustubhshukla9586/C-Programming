#include <stdio.h>

double converter(double x){
    printf("The temperature %.2lf in farenheit is %.2lf\n",x,(x*9)/5+32);
}


int main() {
    int a =  45;
        converter(a);
    a = 35;
        converter(a);
    a = 0;
        converter(a);
    a = 99;
        converter(a);
    return 0;
}