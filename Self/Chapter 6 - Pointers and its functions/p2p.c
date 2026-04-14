#include <stdio.h>

int main() {

    // * = indirection / dereferencing ( operator name and function )
    // & = address
    
    // *ptr = value at that location of p1 
    // %x gives the pointer value in hexadecimal

    // int i = 6;
    // int* j = &i; // * is used when storing the pointer
    // int** k = &j; // ** for storing the address j which is also a address of i

    // // ***&&&a here we can perform the division and cutting digits function like we do it in maths, for first we do the center one like middle two one * and one & and then go on to cut all so the output would be just a.

    // printf("The value of i is %d\n",i);
    // printf("The value of i is %d\n",*j); // Gives the output 6 
    // // * is also used to look for the value on that speicific variable

    // printf("The value of i is %d\n",*(&i)); // 6
    // printf("The value of i is %d\n",**(&j)); // 6 

    // int a = 'a';
    // int *p1 = &a;
    // printf("%d",*p1); // printf 97 gives ascii value
    // printf("%c",*p1); // gives a as output

    float a = 10.6; // The pointer declaration and the variable data type should be same 
    float *p1 = &a;
    printf("%d ",*p1); // printf gives 10
    printf("%.1f",*p1); // gives 0.0 as output





     
    return 0;
}

