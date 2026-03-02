#include <stdio.h>

int main() {
    int i,n;

    n = 10;
    i = 12;

    increment: 
    printf("Incremented");
    return 0;

    decrement:
    printf("Decremented");
    return 0;

    if (n>i){
        goto increment;
    }else {
        goto decrement;
        
    }
    return 0;
}