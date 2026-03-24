#include <stdio.h>

int main() {
    int a = 5;
    int *ptr = &a;
    printf("The address of a is %u\n",&a);
    printf("The address of a is %u\n",ptr);

    ptr++; // This would increase the value of the pointer by the same amount of bytes the element takes. For instance int takes 4 bytes in this program and this ptr would increase by 4 and if it was char it will increase by 1
    printf("The value of ptr is %u\n",ptr);


    return 0;


}