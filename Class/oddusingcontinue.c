#include <stdio.h>

int main() {
    int i,n;
    n = 30;

    for (i = 0; i<=n;i++){
        if (i%2==0){
            continue;
        }else{
            printf("%d\n",i);
        }
    }
    return 0;
}