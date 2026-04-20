
#include <stdio.h>

int main() {

    int arr[] = {1,2,3,4,5};
    int target = 15;
    int total = 0;
    int elem = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    int min_elem = n+1;

    for (int i = 0; i < n; i++){
        elem = 0;
        total = 0;
        total = arr[i];
        elem++;
        if (total >= target){
            if (min_elem > elem) {
                min_elem = elem;
            }
        } 
        else {
            for (int j = i+1; j < n; j++){
            total += arr[j];
            elem++;
            if (total >= target){
                if (min_elem > elem){
                    min_elem = elem;
                    break;
                }
            }
        }
    }
}

    if (min_elem == n+1){
        printf("0");
    }else {
        printf("%d",min_elem);
    }

    return 0;
}