#include <stdio.h>

int main() {
    
    int i = 76;
    int* j = &i; // j is the pointer and gives the exact value of the address of i where it is pointing
    int k = 73;

    // we can use both %u which is unsigned int and %p which is pointer to display the address and with %u you can see the exact numerical value of the address of the pointer variable

    printf("The address of i is %u\n",j);
    printf("The address of i is %u\n",&k);

    // To print the value from the address we can use this *(&varname)
    printf("The value at the address %u is %d",j,*(&i));

    

    return 0;
}