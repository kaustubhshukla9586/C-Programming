#include <stdio.h>

int main() {
    
    int marks[] = {12,34,56,77};

    int *ptr1 = &marks[0];
    int *ptr = marks; // both are same 

    for (int i = 0; i<4; i++){
        // printf("The value at index %d with pointer %u in marks is %d\n",i,&marks[i],marks[i]);

        printf("The value at index %d with pointer %u in marks is %d\n",i,ptr,marks[i]);
        ptr++;
    }

    return 0;
}