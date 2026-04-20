#include <stdio.h>

void thirty(int* a){
    // *a = *a * 30; // you can multiply the address
    *a = *a + 1;
}

int main() {
    int a = 10;
    int *b = &a;
    printf("%d, %d\n",b, a);

    // printf("The Value of a is %d\n",a);
    
    thirty(&a);
    
    printf("%d, %d\n",b, a);
    // printf("The Value of a is %d \n",a);

    return 0;
}