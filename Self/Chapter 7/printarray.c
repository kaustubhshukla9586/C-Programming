#include <stdio.h>

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}; 
    int arr2[] = {2,3,4,5,6}; 

    // Here we have 2 arrays arr and arr2 with 10 and 5 elements 
    // To print a single elements we can use printf but if we have to print all the elements we will have to use the for loop

    int size = sizeof(arr);// This would give the size of total array as in bytes
    int byte = sizeof(arr[0]); // This would give the size of 1 element in array and dividing it by size would give us the number of elements inside the array.


    int arrsize = size/byte; // total elements in array size

    // printf("%d",arrsize);
    
    // for(int i=0;i<=10;i++){  // We are using fixed number for the 2nd condition for amount of elements inside the array to automate that we can use size of function and divide it by the bytes 1 elements is taking
    //     printf("%d\n",arr[i]);
    // }


    for(int i=0;i<=arrsize;i++){ 
        printf("%d\n",arr[i]);
    }

    return 0;
}