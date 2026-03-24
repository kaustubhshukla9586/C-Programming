#include <stdio.h>

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}; // arr[10] 10 represents the number of elements will this array have (We are telling this to the compiler) and int represemts data type of array

    // When we have more elements than we declare inside the [] we get a "Excess elements in array initializer" error
    printf("%d",arr[9]); // The counting of elements starts from 0 and not 1

    int arr2[] = {2,3,4,5,6}; // This would also work fine even if we don't have a fixed number of elements beforehand

    return 0;
}