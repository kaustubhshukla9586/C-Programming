#include <stdio.h>

int main() {

    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int small = arr[0];

    int flag = 0;

    for (int i = 1 ; i<=n-1 ; i++){
        if (small<arr[i]){
            small = arr[i];
        }else{
            flag = 1;
            break;
        }
    }
    if (flag){
        printf("The array is not sorted in ascending order.");
    }else{
        printf("The array is sorted in ascending order.");
    }


    return 0;
}