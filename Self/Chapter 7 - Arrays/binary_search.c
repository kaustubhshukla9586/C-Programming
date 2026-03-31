#include <stdio.h>

int main() {

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int key = 7;
    int beg = 0;
    int end = sizeof(arr)/sizeof(arr[0]);
    int mid = (beg+end)/2;


    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        if (key == arr[i] ){
            printf("Key found at %d at %d place",&arr[i], i+1);
            break;
        } else if (key > arr[i]){
            end = arr[i];
        } else if (key < arr[i]){
            beg = arr[i];
        }
    }

    return 0;
}