#include <stdio.h>

int main() {
    int d = 6;
    int* k = &d;

    printf("The address of %d is %p.\n",d,k);

    printf("The value at address %p is %d",k,*k);

    return 0;
}