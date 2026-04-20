#include <stdio.h>
#include <math.h>

int main() {

    int arr[] = {32,54,64,21,657,21,54};
    int n = sizeof(arr)/sizeof(arr[0]); // stores 6
    int pass,i,temp;

    for (pass = 0; pass<n-1 ; pass ++){
        
        for (i = 0; i < n-pass-1 ; i++){
           
            if (arr[i]<arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    for (i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d ",arr[i]);
    }


    return 0;
}