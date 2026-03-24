#include <stdio.h>

int fok(int* a){ // * when we are taking the pointer and no start when we are taking the integer
    
    // int* k = &a;

    // printf("%p",k)
    
    // printf("%p",a);
}

int main() {
    
    int i;
    int* k = &i;
    printf("The address of int i is %p\n",k);

    fok(k); 

    // In this code if we are passing the pointer (k) in the function the output addresses would be same but when we are passing or giving the variable i which is int and not pointer the addresses would be totally different from the main function and fok function


    return 0;
}