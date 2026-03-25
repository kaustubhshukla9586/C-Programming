#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int items = sizeof(arr)/sizeof(arr[0]);
    int i = 0, j = items - 1, temp;

    while (i<j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
        i++;
    }

    for(int k=0;k<items;k++){ 
        printf("%d\n",arr[k]);
    }

    return 0;
}