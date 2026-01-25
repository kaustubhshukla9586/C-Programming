#include <stdio.h>

int main() {
    // to take user input we use this
    // int a;
    // scanf("%d", &a); // &a is used to get the address of variable a
    // printf("%d",a);
    // return 0;
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Entered number is: %d",a);
    return 0;
}