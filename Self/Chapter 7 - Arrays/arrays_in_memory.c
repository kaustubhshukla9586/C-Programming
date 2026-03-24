#include <stdio.h>

int main() {
    int marks[5] = {1,2,3,4,5};

    for (int i = 0; i<5;i++){ // The array elements a contigious in terms of storage in pointers
        printf("The value of marks in %d at index %d is %u\n",marks[i],i,&marks[i]);
    }




    return 0;
}