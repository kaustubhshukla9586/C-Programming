#include <stdio.h>

/*
1 - Null Pointer - A pointer when it is not pointing to any variable.
2 - Wild Pointer - Any pointer which is declared but not initialized. 
3 - Void Pointer - Generic pointer which can point to any data type.

*/

int main() {

    // NULL Pointer
    // int *ptr = NULL;
    // printf("%d",ptr); // 0
    // printf("%d",*ptr); // Error because it isn't pointing anywhere
    
    // Wild Pointer
    // int *ptr;
    // printf("%d",ptr);
    // printf("%d",*ptr);

    // Void Pointer 
    // int a = 10;
    // int b = 'z';
    // int c = 11;
    // void *ptr = &a;  
    // void *ptr1 = &b;
    // void *ptr2 = &c;

    
    // printf("%d\n",*(int*)ptr); // To de reference the pointer we use this type cast to print the output
    // printf("%d \n",*(char*)ptr1);

    // printf("%d",*(int*)ptr + *(int*)ptr2);

    return 0;
}
