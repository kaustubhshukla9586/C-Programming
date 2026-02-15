#include <stdio.h>

// int sum(int a,int b){
//     return a+b;
//     a = 6; // This won't change the value because only the copy of the actual argument is passed not the value are passed to this function and not the actual variable
// }
    // To actually change the value we can do this
    int som(int* a, int* b){ // * used for storing address of a and b
        *a = 6;
        return (*a + *b);

    }


int main() {

    int a = 2, b = 5;

    // printf("The sum of  a and b is %d\n",sum(a,b));
    // printf("The value of a = %d",a);

    printf("The sum of  a and b is %d\n",som(&a,&b)); // we are passing the address of a and b and not the copy of a and b.
    printf("The value of a = %d",a);
    return 0;
}