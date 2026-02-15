#include <stdio.h>

void thirty(int* a){
    *a = *a * 30;
}

int main() {
    int a = 30;

    printf("The address of a is %d\n",a);
    
    thirty(&a);
    printf("The address of a is %d \n",a);

    return 0;
}