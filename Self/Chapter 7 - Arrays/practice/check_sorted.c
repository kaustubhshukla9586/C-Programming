#include <stdio.h>

int main() {

    int arr[] = {1,6,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num = arr[0];

    int flag = 0;
    int asc = 0;
    int desc = 0;



    // for (int i = 0; i < n; i++){
    //     if (arr[i]<=arr[i+1] && num<=arr[i]){
    //         num = arr[i+1];
    //         asc = 1;
    //         desc = 0;
    //     }else if (num>=arr[i]) {
    //         num = arr[i+1];
    //         asc = 0;
    //         desc = 1;
    //     }else {
    //         flag = 1;
    //     }
    // }
    
    if (flag){
        printf("The array is not sorted.");
    }else{
        if (asc){
            printf("The array is sorted in ascending order.");
        }else if (desc) {
            printf("The array is sorted in descending order.");
        }
    }
   

    return 0;
}