#include <stdio.h>

int main() {
    // We can add and subtract elements but not multiply and divide it.

    // int arr[] = {1,2,3,4,5,6};
    // int *p1 = &arr[0];
    // printf("%d\n",*p1);
    // p1 = p1 +1;
    // printf("%d\n",*p1);


    // char arr[] = {'a','b','c','d','e'};
    // char *p1 = &arr[0];
    // printf("%c\n",*p1);
    // p1 = p1 + 1;
    // printf("%c\n",*p1);

    int arr[] = {1,2,3,4,5,6};
    int *p1 = &arr[0];
    int *p2 = &arr[5];
    p1 + 5;
    printf("%d\n",*p1); // this will give the number of elements are between including the number itself like how many steps will it take for the element to go to the 2nd element 
    
    // printf("%d\n",p1+p2); // Not allowed error 
    // printf("%d\n",*p1+*p2); // Allowed and will give the the addition of values at p1 and p2 location

    return 0;
}