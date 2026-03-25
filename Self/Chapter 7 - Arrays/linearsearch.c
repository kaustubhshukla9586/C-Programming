#include <stdio.h>

int main() {
    int arr[10] = {1,32,33,4,95,36,67,8,95,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 5;
    int found = 0;
    int *location = 0;

    for (int i=0;i<n;i++){
        if (key == arr[i]){
            found = 1;
            location = &arr[i];
            break;
        }
    }

    if (found) {
        printf("Found at %d",location);
    }else{
            printf("Not found");
        }


    return 0;
}   