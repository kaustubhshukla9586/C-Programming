#include <stdio.h>

int printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {

    int arr[5] = {1,2,34,56,78};
    printArray(arr,5);
    
    return 0;
}