#include <stdio.h>

int main() {

    int a[5] = {1,1,2,2,3};

    for (int i=0, j=1; i<5; ){
        if(a[i]==a[j]){
            a[i++] = a[j++];
            
        }
    }

    for (int k = 0; k<5; k++){
        printf("%d ",a[k]);
    }

    return 0;
}