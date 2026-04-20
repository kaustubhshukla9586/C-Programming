#include <stdio.h>

int area(int* a, int* b) {
    printf("Area = %d\n",*a * *b);
}
int pm(int* a, int* b) {
    printf("Perimeter = %d\n",2*(*a+*b));
}

int main() {

    int a = 10;
    int b = 20;
    area(&a,&b);
    pm(&a,&b);

    return 0;
}