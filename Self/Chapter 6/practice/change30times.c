#include <stdio.h>

void thirty(int* a){
    *a = *a * 30; // you can multiply the address
}

int main() {
    int a = 10;

    printf("The Value of a is %d\n",a);
    
    thirty(&a);
    printf("The Value of a is %d \n",a);

    return 0;
}