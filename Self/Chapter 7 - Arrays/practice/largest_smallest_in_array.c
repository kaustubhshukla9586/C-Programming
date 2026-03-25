#include <stdio.h>

int main() {
    int arr[] = {1,12,2,4,-34,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int big = arr[0];
    for (int i = 1; i<=n-1; i++){
        if (big<arr[i]){
            big = arr[i];
        }else{
            continue;
        }
    }

    int small = arr[0];
    for (int i = 1; i<=n-1; i++){
        if (small>arr[i]){
            small = arr[i];
        }else{
            continue;
        }
    }

    printf("The largest number in the array is %d\n",big);
    printf("The smallest number in the array is %d",small);

    return 0;
}