#include <stdio.h>

int main() {
    
    char i = 'y';
    char* j = &i; // j is the pointer and gives the exact value of the address of i where it is pointing

    float k = 5.232;
    float * ki = &k;     

    // using unsigned int %u format specifier gives you a garbage value

    printf("The address of i is %p\n",j);
    printf("The address of i is %p\n",&k);

    
    printf("The value at the address %p is %c",j,*(&i));

    

    return 0;
}