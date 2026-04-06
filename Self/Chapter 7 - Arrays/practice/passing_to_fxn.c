#include <stdio.h>

int printArray(int arr[], int size) { // int arr[] takes up the address of the first element of the array
    // for (int i = 0; i < size; i++) {
    //     arr[i] = i;
    //     printf("%d  ",arr[i]);
    // }
    printf("%d",arr[0]+arr[size-1]);

}

int main() {

    int arr[5] = {1,2,34,56,78};
    printArray(arr,5);
    
    return 0;
}